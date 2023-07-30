#include <stdio.h>
/* This function is the entry point of the program */
int main(void)
{
 int n;
 int a[5];
 int *p;

 a[2] = 1024;
 p = &n;
 *(p + 5) = 98; /* Add this line of code */
 printf("%d\n", *(p + 5)); /* Modify this line to print 98 */
 return (0);
}
