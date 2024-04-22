#include "main.h"
#include <stddef.h> // Include this for NULL
#include <stdlib.h> // Include this for malloc

/**
* _calloc - allocates memory for an array, initialized to 0
* @nmemb: number of elements
* @size: byte size of each element
*
* Return: void pointer to array space
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;

if (!nmemb || !size)
return (NULL);
p = malloc(nmemb * size);
if (!p)
return (NULL);
nmemb *= size;
while (nmemb--)
p[nmemb] = 0;
return (p);
}
