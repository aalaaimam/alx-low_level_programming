#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 * Return: A pointer to the result, or 0 if it can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, n1_len, n2_len, sum, carry;
/* Determine length of n1 and n2 */
for (n1_len = 0; n1[n1_len]; n1_len++);
for (n2_len = 0; n2[n2_len]; n2_len++);
/* Make sure buffer is large enough */
if (n1_len >= (size_r - 1) || n2_len >= (size_r - 1))
return (0);
/* Add digits from the end of n1 and n2 */
i = n1_len - 1;
j = n2_len - 1;
k = 0;
carry = 0;
while (i >= 0 || j >= 0) {
sum = carry;
if (i >= 0)
sum += n1[i--] - '0';
if (j >= 0)
sum += n2[j--] - '0';
if (sum >= 10) {
carry = 1;
sum -= 10;
}
else
{
carry = 0;
}
r[k++] = sum + '0';
}
/* Add final carry if necessary */
if (carry)
r[k++] = carry + '0';
/* Terminate string */
r[k] = '\0';
/* Reverse result string */
for (i = 0, j = k - 1; i < j; i++, j--)
{
r[i] ^= r[j];
r[j] ^= r[i];
r[i] ^= r[j];
}
return (r);
}
