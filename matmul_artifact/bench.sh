#!/bin/sh

#SBATCH --account=csmpi
#SBATCH --cpus-per-task=32
#SBATCH --partition=csmpi_fpga_long
#SBATCH --time=05:00:00
#SBATCH --output=bench.out
#SBATCH --mem=24G

if [ "$#" -lt 3 ]; then
    printf "Usage: MINPROC MAXPROC RUNS\n" >&2
    printf  "\t where MINPROC MAXPROC is the min/max number of processors,\n" >&2
    printf  "\t and RUNS is the number of times to average the results over.\n" >&2
    exit
fi

make bin/mm
make clean -C util
make -C util

bench_dir=csvs/
mkdir -p "$bench_dir"
printf "P,mean,min,max,peak\n" \
    > "$bench_dir"/index.csv

P="$1"
while [ "$P" -le "$2" ]; do
    run=1
    while [ "$run" -le "$3" ]; do
        {
            bin/mm -mt "$P"
            printf "\n"
        } >> "$bench_dir"/sac_index.csv
        run=$(( run + 1 ))
    done

    {
        printf "%s," "$P"
        util/stat "$bench_dir"/sac_index.csv
        printf "%s," "$(( 55 * P ))"
        printf "\n"
    } >> "$bench_dir"/index.csv

    rm "$bench_dir"/sac_index.csv

    P=$(( 2 * P ))
done
