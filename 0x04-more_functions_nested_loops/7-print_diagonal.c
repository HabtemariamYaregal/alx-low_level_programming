#include "main.h"
/**
 * print_diagonal - prints diagonal line.
 * @n: number of lines.
 */
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
if (n <= 0)
{
_putchar('\n');
}
else
{
_putchar('\\');
}
_putchar('\n');
}
}
