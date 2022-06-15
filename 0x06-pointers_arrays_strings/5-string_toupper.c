#include "main.h"
#include <ctype.h>
/**
 * string_toupper - change lowercases to upper
 * @character: array to be changed
 * Return: zero
*/
char *string_toupper(char *character)
{
int i;
char ch;
for (i = 0; character[i] != '\0'; i++)
{
ch = character[i];
toupper(ch);
}
return (0);
}
