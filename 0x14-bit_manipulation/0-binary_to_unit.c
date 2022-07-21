#include "main.h"

/**
 * binary_to_uint - change a binary number into unsigned int
 * @b: string
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int bin = 0;
if (b==NULL)
{
return (0);
}
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
{
return (0);
}
bin = 2 * bin + (b[i] - '0');
}
return (bin);
}
