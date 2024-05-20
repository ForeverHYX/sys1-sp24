#!/bin/sh

# Change to Your spike and pk path 
# For example: 
SPIKE_PATH="/home/forever/sys1-sp24/repo/build/spike/spike"
PK_PATH="/home/forever/sys1-sp24/repo/build/riscv-pk/pk"
#SPIKE_PATH=""
#PK_PATH=""

$SPIKE_PATH $PK_PATH $*