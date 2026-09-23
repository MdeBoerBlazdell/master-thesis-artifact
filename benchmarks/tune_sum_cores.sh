#!/bin/sh

#SBATCH --account=csmpi
#SBATCH --cpus-per-task=32
#SBATCH --exclusive
#SBATCH --partition=csmpi_fpga_long
#SBATCH --time=01:00:00
#SBATCH --output=tune_sum_cores.out
#SBATCH --mem=12G

make clean -C util
make -C util

bench_dir=csvs/
mkdir -p "$bench_dir"

N=512
ROWS=65536
PS="1 2 4 8 16 20 24 28 32"

for variant in slices selection; do
    case "$variant" in
        slices)
            binary=bin/sum_slice
            flags="-DN=$N -DROWS=$ROWS -DSLICE"
            ;;
        selection)
            binary=bin/sum_selection
            flags="-DN=$N -DROWS=$ROWS"
            ;;
    esac

    output="$bench_dir/sum_cores_${variant}.csv"
    raw="$bench_dir/sac_sum_cores_${variant}.csv"

    printf "P,mean,min,max,peak\n" > "$output"

    # N and ROWS are compile-time constants.
    make clean
    make "$binary" SAC_FLAGS="$flags"

    for P in $PS; do
        run=1

        while [ "$run" -le "$1" ]; do
            "$binary" -mt "$P" >> "$raw"
            run=$((run + 1))
        done

        {
            printf "%s," "$P"
            util/stat "$raw"
            printf "%s," "$((55 * P))"
            printf "\n"
        } >> "$output"

        rm -f "$raw"
    done
done