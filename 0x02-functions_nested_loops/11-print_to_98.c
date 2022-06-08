#include "main.h"
/**
 * add - print numbers upto 98
 * @n: the number to start
*/

void print_to_98(int n)
{
if (n <= 98)
{
for (int i = n; i <= 98; i++)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
}
else
{
for (int i = n; i >= 98; i--)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
}
}
}
