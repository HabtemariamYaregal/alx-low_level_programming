#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @s: array to be encoded
 * Return: s
 */
char *leet(char *s)
{
int i, j, k;
char ch1[] = "aAeEoOtTlL";
char ch2[] = "4433007711";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; ch1[j] != '\0'; j++)
{
if (ch1[j] == s[i])
{
k = j;
s[i] = ch2[k];
}
}
}
return(s);
}
