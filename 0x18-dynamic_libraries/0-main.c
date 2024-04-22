#include <stdio.h>
#include <stdlib.h>

size_t _strlen(const char *str);

/**
* main - check the code
*
* Return: Always EXIT_SUCCESS.
*/
int main(void)
{
printf("%zu\n", _strlen("My Dyn Lib")); // Note: %zu for size_t
return (EXIT_SUCCESS);
}
