#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - return a pointer to a 2 dimensional array
 * @width: width of an array
 * @height: height of an array
 * Return: NULL, when failure 
 */
int **alloc_grid(int width, int height)
{
int **array;
int i, j;
if (height <= 0 || width <= 0)
{
return (NULL);
}
array = (int **)malloc(sizeof(int *) * height);
if (array == NULL)
{
return (NULL);
}
i = 0; 
while (i < height)
{
array[i] = (int *) malloc(sizeof(int) * width);
if (array[i] == NULL)
{
free(array);
}
for (j = 0; j <= 1; j++)
{
free(array[j]);
}
return (NULL);
i++;
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
array[i][j] = 0;
}
}
return (array);
}
