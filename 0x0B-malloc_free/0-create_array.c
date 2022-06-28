#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: size of the array
 * @c: character
 * Return: NULL, if size is 0 or fail
 *         pointer to the array, is success
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i = 0;
if (size == 0)
{
return (NULL);
}
ptr = (char *) malloc(sizeof(char) * size);
if (ptr == NULL)
{
return (0);
}
while (i < size)
{
*(ptr + i) = c;
i++;
}
*(ptr + i) = '\0';
return (ptr);
}
