#include <stdlib.h>

int rand(void) {
static int numbers[] = {9, 8, 10, 24, 75, 9};
static int index = 0;
return numbers[index++ % 6];
}
