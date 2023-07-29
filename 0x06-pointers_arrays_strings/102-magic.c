#include <stdio.h>

int main(void) {
 int n, *p;
 int a[5];

 a[2] = 1024;
 p = &n;

 /* Add this line of code */
 *(p + (sizeof(int) * 5)) = 98;

 /* ...so that this prints 98\n */
 printf("a[2] = %d\n", *(a + 2));
 return 0;
}
