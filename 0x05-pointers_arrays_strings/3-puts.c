#include "main.h"

/**
 * _puts - prints the string
 * @str: string to be checked
 * Return: nothing
*/
void _puts(char *str)
{
int i;
for (i = 0; str[i] != 0; i++)
{
_putchar(str[i]);
}
_purchar('\n')
}
