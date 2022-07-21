#include "main.h"

/**
 * get_bit - value of a bit
 * @n: one parameter
 * @index: index
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit;
bit = (n >> index);
if (index > 32)
return (-1);
return (bit & 1);
}
