#!/bin/bash

# Compile each .c file into its own object file, excluding files with main, _isdigit, _strlen, and _isupper functions
for file in *.c; do
if ! grep -q -E "(main|_isdigit|_strlen|_isupper)" "$file"; then
gcc -c -Wall -Werror -fpic "$file" -o "${file%.c}.o"
fi
done

# Create the dynamic library
gcc -shared *.o -o liball.so

# Clean up the object files
rm *.o
