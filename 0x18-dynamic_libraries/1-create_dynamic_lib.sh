#!/bin/bash

# Compile each .c file into its own object file, excluding files with main, _isdigit, and _strlen functions
for file in *.c; do
if ! grep -q -E "(main|_isdigit|_strlen)" "$file"; then
gcc -c -Wall -Werror -fpic "$file" -o "${file%.c}.o"
fi
done

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up the object files
rm *.o
