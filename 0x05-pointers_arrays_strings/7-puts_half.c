#include "main.h"

/**
 * puts_half - prints the string half
 * @str: string to be checked
 * Return: nothing
*/
void puts_half(char *str)
{
int length = 0, i;
for (i = 0; str[i] != '\0'; i++)
{
length++;
}
for (i = (length / 2); str[i] != '\0'; i++)
{
if (length % 2 != 0)
{
i++;
}
_putchar(str[i]);
}
_putchar('\n');
}
