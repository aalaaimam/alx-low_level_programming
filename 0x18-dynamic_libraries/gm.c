#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
// Check if at least one number is provided as argument
if (argc < 2) {
printf("Usage: %s <numbers>\n", argv[0]);
return 1;
}

// Loop through command-line arguments and print them
for (int i = 1; i < argc; i++) {
printf("%s\n", argv[i]);
}

return 0;
}
