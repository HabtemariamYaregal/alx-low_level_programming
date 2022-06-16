#include "main.h"

/**
 * rot13 - change a string in rot13 encoding
 * @s: array to be encoded
 * Return: s
 */
char *rot13(char *s)
{
int i, j;
char ch1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char ch2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; ch1[j] != '\0'; j++)
{
if (s[i] == ch1[j])
{
s[i] = ch2[j];
break;
}
}
}
return (s);
}
