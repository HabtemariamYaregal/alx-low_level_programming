#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocate the memory using malloc
 * @b: variable to located
 * Return: a pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return(ptr);
free(ptr);
}
