#include "main.h"

/**
 * _pow_recursion - returns x the power of y
 * @x: base
 * @y: exponent
 * Return: x raise y
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
