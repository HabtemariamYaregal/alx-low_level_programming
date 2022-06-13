#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string to be checked
 * @return: lenth of the string
*/
int _strlen(char *s)
{
int length = 0, i;
for (i = 0; s[i] != '\0'; i++)
{
length++;
}
return (length);
}
