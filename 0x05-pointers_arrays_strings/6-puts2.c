#include "main.h"

/**
 * puts2 - prints the string reverse
 * @str: string to be checked
 * Return: nothing
*/
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
{
_putschar(str[i]);
}
}
_putschar('\n');
}
