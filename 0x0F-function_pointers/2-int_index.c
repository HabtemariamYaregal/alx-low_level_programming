#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - execute a function of array
 * @array: array to be excuted
 * @cmp: a pointer to a function
 * @size: size of an array 
 * Return: index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
