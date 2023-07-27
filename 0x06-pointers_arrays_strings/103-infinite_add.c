#include <stdio.h>
/**
 * infinite_add - Adds two numbers stored as strings
 * @n1: The first number to add
 * @n2: The second number to add
 * @r: The buffer to store the result in
 * @size_r:
 * This function adds two numbers stored as strings,
 * and stores the result in a buffer
 * provided by the caller.
 * The size of the buffer must be large enough to hold the
 * result, or the function will return NULL.
 * The function returns a pointer to the
 * result buffer on success, or NULL on failure
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum = 0;
while (n1[len1])
len1++;
while (n2[len2])
len2++;
if (len1 >= size_r || len2 >= size_r || size_r <= 0)
{
return (0);
}
r[size_r - 1] = '\0';
while (len1 > 0 || len2 > 0 || carry != 0)
{
sum = carry;
if (len1 > 0)
{
sum += n1[--len1] - '0';
}
if (len2 > 0)
{
sum += n2[--len2] - '0';
}
carry = sum / 10;
r[--size_r] = (sum % 10) + '0';
}
if (r[0] == '0' && r[1])
{
return (0);
}
return (r);
}
