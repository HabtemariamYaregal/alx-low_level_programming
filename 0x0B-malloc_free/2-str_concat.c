#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: character array to be concatenated
 * @s2: character array to be concatenated
 * Return: NULL, when pointer
 */
char *str_concat(char *s1, char *s2)
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
cat = malloc(sizeof(char) * (k + l + 1));
if (cat == NULL)
{
return (NULL);
}
if (s1)
{
while (i < k)
{
cat[i] = s1[i];
i++;
}
}
if (s2)
{
while (i < (k + l))
{
cat[i] = s2[j];
i++;
j++;
}
}
cat[i] = '\0';
return (cat);
}
