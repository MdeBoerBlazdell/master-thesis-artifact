#!/bin/bash

#SBATCH --account=csmpi
#SBATCH --cpus-per-task=32
#SBATCH --exclusive
#SBATCH --partition=csmpi_fpga_long
#SBATCH --time=04:00:00
#SBATCH --output=mkl.out

if [ "$#" -lt 6 ]; then
    printf "Usage: M K N MINPROC MAXPROC RUNS\n" >&2
    printf  "\t where the first matrix is M x K, the second K x N,\n" >&2
    printf  "\t MINPROC MAXPROC is the min/max number of processors,\n" >&2
    printf  "\t and RUNS is the number of times to average the results over.\n" >&2
fi

M="$1"
K="$2"
N="$3"
minproc="$4"
nproc="$5"
runs="$6"

bench_dir=csvs
mkdir -p "$bench_dir"
printf "P,mean,min,max\n" \
    > "$bench_dir"/mkl.csv

make blas
make clean -C util
make -C util

P="$minproc"
while [ "$P" -le "$nproc" ]; do
    run=1
    while [ "$run" -le "$runs" ]; do
        {
            env MKL_NUM_THREADS="$P" bin/mkl "$M" "$K" "$N"
            printf "\n"
        } >> "$bench_dir"/mkl_temp.csv

       run=$(( run + 1 ))
    done

    {
        printf "%s," "$P"
        util/stat "$bench_dir"/mkl_temp.csv
        printf "\n"
    } >> "$bench_dir"/mkl.csv

    rm "$bench_dir"/mkl_temp.csv

    P=$(( 2 * P ))
done
