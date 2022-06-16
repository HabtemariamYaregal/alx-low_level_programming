#include "main.h"

/**
 * rot13 - encode string using rot 13
 * @s: array to be changed
 * Return : s
*/
char *rot13(char *s)
{
int j, i;
for (i = 0; s[i] != '\0'; i++)
{
j = 0;
while ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z'))
{
if ((s[i] >= 'a' && s[i] <= 'm'))
{
s[i] = s[i] + 13;
}
else
{
s[i] = s[i] - 13;
}
j++;
}
}
return (s);
}
