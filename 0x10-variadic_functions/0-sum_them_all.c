#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - return the sum of all parameters
 * @n: number of arguments
 * Return: the sum of all parameters
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list arg;
va_start(arg, n);
if (n == 0)
{
return (0);
}
else
{
for (i = 0; i < n; i++)
{
int val = va_arg(arg,int);
sum = sum + val;
}
}
va_end(arg);
return (sum);
}
