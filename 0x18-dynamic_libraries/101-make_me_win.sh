#!/bin/bash

# Compile rand.c into rand.so
gcc -shared -o rand.so -fPIC rand.c

# Set LD_PRELOAD to preload rand.so
export LD_PRELOAD=$PWD/rand.so

# Verify the MD5 checksum of gm
md5sum gm
