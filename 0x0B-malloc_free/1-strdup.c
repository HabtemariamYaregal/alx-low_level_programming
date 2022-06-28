#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: character array
 * Return: NULL, if str==NULL
 *         pointer to a new string, is success
 */
char *_strdup(char *str)
{
char *c;
unsigned int i = 0, j = 0;
if (str == NULL)
{
return (NULL);
}
while (str[j])
{
j++;
}
c = malloc(sizeof(char) * (j + 1));
if (c == NULL)
{
return (NULL);
}
while ((c[i] = str[i]) != '\0')
{
i++;
}
return (c);
}
