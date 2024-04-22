#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

void srand(unsigned seed) {
// Intercept srand to ensure predictable random numbers
printf("Hijacked srand!\n");
}

int rand(void) {
// Intercept rand to always return a winning number
printf("Hijacked rand!\n");
return 9; // Return a winning number
}
