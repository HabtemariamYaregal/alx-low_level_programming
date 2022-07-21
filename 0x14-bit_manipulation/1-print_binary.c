#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
int i, counter = 0;
unsigned long int now;
for (i = 63; i >= 0; i--)
{
now = n >> i;
if (now & 1)
{
_putchar('1');
counter++;
}
else if (counter)
_putchar('0');
}
if (!counter)
{
_putchar('0');
}
}
