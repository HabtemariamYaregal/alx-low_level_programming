#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string to be checked
 * @Return: lenth of the string
*/
int _strlen(char *s)
{
int length;
while (*s != '\0')
{
length = length + 1;
s++;
}
return (length);
}
