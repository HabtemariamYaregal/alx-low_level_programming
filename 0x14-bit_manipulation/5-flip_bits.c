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
int i, counter = 0;
unsigned long int now;
unsigned long int power = n ^ m;
for (i = 63; i >= 0; i--)
{
now = power >> i;
if ( & 1)
counter++;
}
return (counter);
}
