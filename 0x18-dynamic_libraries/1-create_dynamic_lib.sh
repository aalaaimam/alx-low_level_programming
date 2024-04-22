#!/bin/bash

# Compile all .c files into object files, excluding files with 'main' in their name
gcc -Wall -Werror -Wextra -pedantic -fPIC -c $(ls *.c | grep -v 'main') 

# Create the dynamic library liball.so from the object files
gcc -shared -o liball.so *.o

# Cleanup - remove object files
rm *.o
