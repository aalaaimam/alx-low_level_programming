#!/bin/bash

# Remove the script
rm 101-make_me_win.sh

# List directory contents
ls -la

# Clear command history
history -c

# List directory contents again
ls -la

# Verify MD5 sum of the gm program
md5sum gm

# Run the gm program to trigger jackpot message
./gm 9 8 10 24 75 9
