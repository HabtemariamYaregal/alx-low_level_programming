#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: base
 * Return: square root of n
 * root_check - check if there is quare root
 * @checker: variable to check
 * @n1: another checker
*/

int root_check(int checker, int n1)
{
if (checker * checker != n1)
{
return (-1);
}
else
{
return (n1);
}
return (root_check(checker + 1, n1));
}
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
else
{
return (root_check(1, n));
}
}
