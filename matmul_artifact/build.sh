#!/bin/bash

#SBATCH --account=csmpi
#SBATCH --cpus-per-task=32
#SBATCH --partition=csmpi_fpga_long
#SBATCH --time=04:00:00
#SBATCH --output=build.out

make -j
