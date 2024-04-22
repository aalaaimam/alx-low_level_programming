#!/bin/bash
wget -P /tmp https://github.com/aalaaimam/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
# Load the libhack.so library using LD_PRELOAD
export LD_PRELOAD=/tmp/libhack.so

# Execute the gm program with the specified numbers
./gm 9 8 10 24 75 9
