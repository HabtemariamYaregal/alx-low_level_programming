#include "main.h"
/**
 * reverse_array - reverse the given array
 * @a: array to be reversed
 * @n: number of elements
 * Return: nothing
*/
void reverse_array(int *a, int n)
{
int i = 0, temp = 0;
n--;
while (i < n)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
i++;
n--;
}
}
