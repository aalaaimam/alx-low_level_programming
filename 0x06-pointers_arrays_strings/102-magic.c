#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Return: 0 on success
 **/
int main(void)
{
 int n;
 int a[5];
 int *p;

 a[2] = 1024;
 p = &n;
 
 /* Add this line of code */
 *(p + 5) = 98;

 /* This should print 98\n */
 printf("a[2] = %d\n", a[2]);

 return (0);
}
