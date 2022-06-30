#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocate memory for array
 * @nmemb: array to be addressed
 * @size: size of an array
 * Return: a pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *address;
if (nmemb == 0 || size == 0)
{
return ('\0');
}
address = malloc(nmemb * size);
if (address == NULL)
{
return ('\0');
}
for (i = 0; i < nmemb * size; i++)
{
address[i] = 0;
}
return ((void *)address);
}
