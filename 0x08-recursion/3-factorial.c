#include "main.h"

/**
 * factorial - returns the length of a string
 * @n: a number to be counted
 * Return: factorial of a number
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n <= 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
