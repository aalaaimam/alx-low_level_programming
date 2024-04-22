#!/bin/bash

# Compile each .c file into its own object file, except main.c and 101-mul.c
for file in *.c; do
if [ "$file" != "0-main.c" ] && [ "$file" != "101-mul.c" ]; then
gcc -c -Wall -Werror -fpic "$file" -o "${file%.c}.o"
fi
done

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up the object files
rm *.o
