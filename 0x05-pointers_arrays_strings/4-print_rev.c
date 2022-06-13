#include "main.h"

/**
 * print_rev - prints the string reverse
 * @s: string to be checked
 * Return: nothing
*/
void print_rev(char *s)
{
int i, length = 0;
for (i = 0; s[i] != '\0'; i++)
{
length++;
}
for (i = length; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
