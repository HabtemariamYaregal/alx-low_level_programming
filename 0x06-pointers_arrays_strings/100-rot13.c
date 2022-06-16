#include "main.h"

/**
 * rot13 - encode string using rot 13
 * @s: array to be changed
 * Return : s
*/
char *rot13(char *s)
{
for (i = 0; s[i] != '\0'; i++)
{
while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
{
if ((s[i] >= 'a' && s[i] <= 'm'))
{
s[i] = s[i] + 13;
}
else
{
s[i] = s[i] - 13;
}
}
}
return (s);
}
