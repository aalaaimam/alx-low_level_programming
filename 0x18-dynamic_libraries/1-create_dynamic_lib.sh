#!/bin/bash

# Compile each .c file into its own object file
for file in *.c; do
gcc -c -Wall -Werror -fpic "$file" -o "${file%.c}.o"
done

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up the object files
rm *.o
