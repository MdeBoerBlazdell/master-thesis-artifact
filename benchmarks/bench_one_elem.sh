#!/bin/sh

#SBATCH --account=csmpi
#SBATCH --cpus-per-task=32
#SBATCH --exclusive
#SBATCH --partition=csmpi_fpga_long
#SBATCH --time=01:00:00
#SBATCH --output=one_elem_selection_vs_slices.out
#SBATCH --mem=24G

make clean -C util
make -C util

bench_dir=csvs/
mkdir -p "$bench_dir"

ROWS=8192
NS=${NS:-"16 32 64 128 256 512 1024 2048 4096 8192 16384 32768 65536 131072"}

P="$1"
RUNS="$2"

for variant in slices selection; do
    case "$variant" in
        slices)
            binary=bin/one_elem_slice
            flags="-DSLICE"
            output="$bench_dir/one_elem_slices.csv"
            raw="$bench_dir/sac_one_elem_slices.csv"
            ;;
        selection)
            binary=bin/one_elem_selection
            flags=""
            output="$bench_dir/one_elem_selections.csv"
            raw="$bench_dir/sac_one_elem_selections.csv"
            ;;
    esac

    printf "N,mean,min,max,peak\n" > "$output"

    for N in $NS; do
        # N and ROWS are compile-time constants.
        make clean
        make "$binary" SAC_FLAGS="-DN=$N -DROWS=$ROWS $flags"

        run=1
        while [ "$run" -le "$RUNS" ]; do
            "$binary" -mt "$P" >> "$raw"
            run=$((run + 1))
        done

        {
            printf "%s," "$N"
            util/stat "$raw"
            printf "\n"
        } >> "$output"

        rm -f "$raw"
    done
done