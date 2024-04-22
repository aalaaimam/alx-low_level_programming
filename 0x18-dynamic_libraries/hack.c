#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand(void) {
return 9; // Always return 9 as the winning number
}

int rand_r(unsigned int *seed) {
return 9; // Always return 9 as the winning number
}
