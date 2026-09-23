#!/bin/sh

#SBATCH --account=csmpi
#SBATCH --cpus-per-task=32
#SBATCH --partition=csmpi_fpga_long
#SBATCH --time=05:00:00
#SBATCH --output=split.out

if [ "$#" -lt 3 ]; then
    printf "Usage: MINPROC MAXPROC RUNS\n" >&2
    printf  "\t where MINPROC MAXPROC is the min/max number of processors,\n" >&2
    printf  "\t and RUNS is the number of times to average the results over.\n" >&2
    exit
fi

make bin/split
make clean -C util
make -C util

bench_dir=csvs/
mkdir -p "$bench_dir"
printf "P,tilemean,tilestddev,mulmean,mulstddev,untilemean,untilestddev\n" \
    > "$bench_dir"/split.csv

P="$1"
while [ "$P" -le "$2" ]; do
    run=1
    while [ "$run" -le "$3" ]; do
        {
            bin/split -mt "$P"
            printf "\n"
        } >> "$bench_dir"/sac_split.csv
        run=$(( run + 1 ))
    done

    awk -F "," '{ print $1 }' "$bench_dir"/sac_split.csv > tile.csv
    awk -F "," '{ print $2 }' "$bench_dir"/sac_split.csv > mul.csv
    awk -F "," '{ print $3 }' "$bench_dir"/sac_split.csv > untile.csv

    {
        printf "%s," "$P"
        util/stddev tile.csv
        printf ","
        util/stddev mul.csv
        printf ","
        util/stddev untile.csv
        printf "\n"
    } >> "$bench_dir"/split.csv

    rm "$bench_dir"/sac_split.csv
    rm tile.csv
    rm mul.csv
    rm untile.csv

    P=$(( 2 * P ))
done
