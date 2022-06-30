#include "main.h"
#include <stdlib.h>

/**
 * *array_range - create an array
 * @min: starting point
 * @max: lasting point
 * Return: a pointer to allocated memory
*/

int *array_range(int min, int max)
{
int *arr, i, diff, j = 0;
diff = max - min + 1;
arr = malloc(sizeof(int) * diff);
for (i = min; i <= max; i++)
{
if (j < diff)
{
arr[j] = i;
j++;
}
}
if (min > max)
{
return (NULL);
}
if (!arr)
{
return (NULL);
}
return (arr);
}
