#!/bin/bash

gcc -fPIC -shared -o /tmp/libgm.so /path/to/your/interceptor.c
LD_PRELOAD=/tmp/libgm.so ./gm 9 8 10 24 75 9
