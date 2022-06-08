#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print numbers upto 98
 * @n: the number to start
*/

void print_to_98(int n)
{
if (n <= 98)
{
int i;
for (i = n; i <= 98; i++)
{
if (i == 98)
{
printf("%d\n", i);
}
else
{
printf("%d, ", i);
}
}
}
else
{
int i;
for (i = n; i >= 98; i--)
{
if (i == 98)
{
printf("%d\n", i);
}
else
{
printf("%d, ", i);
}
}
}
}
