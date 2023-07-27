#include <stdio.h>
/* This program demonstrates pointer arithmetic in C */
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &a[2]; /* point p to the address of a[2] */
*(p + 5) = 98; /* add 5 to the address to modify the next integer value */
printf("a[2] = %d\n", a[2]);
return (0); /* parentheses added around return value */
}
