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
for (i = 0; character[i] != '\0'; i++)
{
if (character[i] >= 'a' && character[i] <= 'z')
{
character[i] = character[i] - 32;
}
}
return (character);
}
