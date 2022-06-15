#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalise the string
 * @str: array to be changed
 * Return: zero
*/
char *cap_string(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
{
if (str[i+1] >= 'a' && str[i+1] <= 'z')
{
str[i+1] = str[i+1] - 32;
}
}
}
return (str);
}
