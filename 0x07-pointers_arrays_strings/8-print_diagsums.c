#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - add dizgonals of square matrix
 * @size: size of the array
 * @a: array to be added
*/
void print_diagsums(int *a, int size)
{
int i, j, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
sum1 = sum1 + a[i][j];
}
}
}
for (i = 0; i < size; i++)
{
j = size - 1;
sum2 = sum2 + a[i][j];
j--;
}
printf("%d, %d\n", sum1, sum2);
}
