#include "main.h"

/**
 * rev_string - prints the string reverse
 * @s: string to be checked
 * Return: nothing
*/
void rev_string(char *s)
{
int i, length = 0;
for (i = 0; s[i] != '\0'; i++)
{
length++;
}
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
_putchar('\n');
for (i = (length - 1); i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
