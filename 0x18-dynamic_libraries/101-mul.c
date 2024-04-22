#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* big_multiply - multiply two big number strings
* @s1: the first big number string
* @s2: the second big number string
*
* Return: the product big number string
*/
char *big_multiply(char *s1, char *s2)
{
char *r;
int l1, l2, a, b, c, x;

l1 = _strlen(s1);
l2 = _strlen(s2);
r = malloc(a = x = l1 + l2);
if (!r)
{
printf("Error\n");
exit(98);
}
while (a--)
r[a] = 0;

for (l1--; l1 >= 0; l1--)
{
if (!_isdigit(s1[l1]))
{
free(r);
printf("Error\n");
exit(98);
}
a = s1[l1] - '0';
c = 0;

for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
{
if (!_isdigit(s2[l2]))
{
free(r);
printf("Error\n");
exit(98);
}
b = s2[l2] - '0';

c += r[l1 + l2 + 1] + (a * b);
r[l1 + l2 + 1] = c % 10;

c /= 10;
}
if (c)
r[l1 + l2 + 1] += c;
}
return (r);
}
