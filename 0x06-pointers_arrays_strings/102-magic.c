#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Return: 0 on success
 */
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &n;
/* Update integer value 5 places after the memory location of n to 98 */
*((int *)((char *)p + 5 * sizeof(int))) = 98;
/* Print value of a[2] (should be 98) */
printf("a[2] = %d\n", a[2]);
return (0);
}
