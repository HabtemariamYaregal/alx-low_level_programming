#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenate two strings
 * @n: number of characters printed
 * @s1: strinng for concatinating
 * @s2: strinng for concatinating
 * Return: a pointer to allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *cat;
unsigned int i = 0, j = 0, k = 0, l = 0;

while (s1 && s1[k])
{
k++;
}
while (s2 && s2[l])
{
l++;
}
if (n < l)
{
cat = malloc(sizeof(char) * (k + n + 1));
}
else
{
cat = malloc(sizeof(char) * (k + l + 1));
}
if (!cat)
{
return (NULL);
}
while (i < k)
{
cat[i] = s1[i];
i++;
}
while (i < (k + n))
{
cat[i] = s2[j];
i++;
j++;
}
cat[i] = '\0';
return (cat);

}
