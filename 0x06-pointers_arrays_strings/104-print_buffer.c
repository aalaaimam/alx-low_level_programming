#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints content of size bytes of buffer pointed by b
 * @b: buffer.
 * @size: size of buffer.
 * The output should print 10 bytes per line
 *	line starts with position of 1st byte of line in hex(8chars)-start with 0
 *	line show hex content(2chars) of buff, 2 bytes per time seperated by space
 *	line shows content of buff. If byte is a printable char print letter else .
 *	Each line ends with a new line \n
 *	If size is 0 or less, the output should be a new line only \n
 * Return: void.
 */
void print_buffer(char *b, int size)
{
int j, k, l;
if (size <= 0)
printf("\n");
else
{
for (j = 0; j < size; j += 10)
{
printf("%.8x:", j);
for (k = j; k < j + 10; k++)
{
if (k % 2 == 0)
printf(" ");
if (k < size)
printf("%.2x", *(b + k));
else
printf("  ");
}
printf(" ");
for (l = j; l < j + 10; l++)
{
if (l >= size)
break;
if (*(b + l) < 32 || *(b + l) > 126)
printf("%c", '.');
else
printf("%c", *(b + l));
}
printf("\n");
}
}
}
