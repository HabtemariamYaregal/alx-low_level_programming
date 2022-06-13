#include "main.h"

/**
 * puts_half - prints the string half
 * @str: string to be checked
 * Return: nothing
*/
void puts_half(char *str)
{
int length = 0, i, half;
for (i = 0; str[i] != '\0'; i++)
{
length++;
}
if (length % 2 != 0)
{
half = (length + 1) / 2;
}
else
{
half = length / 2;
}
for (i = half; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
