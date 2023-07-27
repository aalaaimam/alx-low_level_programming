/*
 * 102-magic.c - a program that demonstrates pointer
 * arithmetic by modifying a value
 * in an array using only a pointer and
 * the *(dereference) operator.
 *
 * The program initializes an integer array and a pointer
 * variable and then sets the
 * third element of the array to 1024.
 * It then modifies the value of a different integer
 * variable using pointer arithmetic only,
 * by adding 5 to the pointer and dereferencing
 * the result to set the value to 98.
 * Finally, the program prints the value of the third
 * element of the array to confirm that it has not been modified.
 * Usage: ./102-magic
 */
#include <stdio.h>
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &n;
 /*
 * write your line of code here...
 * Remember:
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anything else than this line of code
 */
*(p + 5) = 98;
 /* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
