 #include "main.h"

/**
 * flip_bits - number of bits to change
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i, flips = 0;
unsigned long int j = sizeof(unsigned long int) * 8;
for (i = 0; i < j; i++)
{
if ((m & 1) != (n & 1))
flips += 1;
n = n >> 1;
m = m >> 1;
}
return (flips);;
}
