#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - create an array
 * @ptr: pointer previously allocated
 * @old_size: the last size
 * @new_size: the newly coming size
 * Return: a pointer to allocated memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p1, *p2;
unsigned int i;
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
{
return (malloc(new_size));
}
p1 = malloc(new_size);
if (!p1)
{
return (NULL);
}
p2 = ptr;
if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
p1[i] = p2[i];
}
if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
p1[i] = p2[i];
}
free(ptr);
return (p1);
}
