#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - execute a function of array
 * @array: array to be excuted
 * @action: a pointer to a function
 * @size: size of an array 
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array || size || action)
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
