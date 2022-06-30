#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocate the memory using malloc
 * @b: variable to located
 * Return: a pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = (int*) malloc(sizeof(int) * b);
return(ptr); 
free(ptr);
}
