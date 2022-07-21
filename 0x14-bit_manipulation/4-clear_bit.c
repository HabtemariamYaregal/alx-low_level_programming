#include "main.h"

/**
 * clear_bit - sets the value of a bit
 * @n: number to be changed
 * @index: index of the bit to clear
 *
 * Return: 1 or -r
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
