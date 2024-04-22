#!/bin/bash

# Compile each .c file into its own object file, excluding source_0.c, source_1.c, and source_2.c
for file in *.c; do
    if [ "$file" != "source_0.c" ] && [ "$file" != "source_1.c" ] && [ "$file" != "source_2.c" ]; then
        gcc -c -Wall -Werror -fpic "$file" -o "${file%.c}.o"
    fi
done

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up the object files
rm *.o
