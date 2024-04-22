#!/bin/bash
gcc -shared -o rand.so -fPIC rand.c
./gm 9 8 10 24 75 9
