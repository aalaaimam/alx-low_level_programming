#!/bin/bash

# Load the libhack.so library using LD_PRELOAD
export LD_PRELOAD=./libhack.so

# Execute the gm program with the specified numbers
./gm 9 8 10 24 75 9
