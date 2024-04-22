#!/bin/bash

# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c

# Create the dynamic library liball.so from the object files
gcc -shared -o liball.so *.o

# Cleanup - remove object files
rm *.o
