#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
=======

>>>>>>> 8a377ebcd7662ba2d711778271e4444d8e17e4db
/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 * Return: A pointer to the result, or 0 if it can't be stored in r
 */
<<<<<<< HEAD
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
=======

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
>>>>>>> 8a377ebcd7662ba2d711778271e4444d8e17e4db
}
