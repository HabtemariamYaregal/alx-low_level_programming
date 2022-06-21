#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - add diagonals of square matrix
 * @a: array to be added
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 = sum1 + a[i];
sum2 = sum2 + a[size - i - 1];
a = a + size;
}
printf("%d, %d\n", sum1, sum2);
}
