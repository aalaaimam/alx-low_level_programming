#!/bin/bash
gcc -shared -o rand.so -fPIC rand.c
export LD_PRELOAD=$PWD/rand.so
