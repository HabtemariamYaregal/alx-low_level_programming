#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string to be checked
 * @Return: lenth of the string
*/
int _strlen(char *s)
{
int length, i;
for (i = 0; s[i] != '\0'; i++)
{
length++;
}
return (length);
}
