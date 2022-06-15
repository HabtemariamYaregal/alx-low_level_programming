#include "main.h"
#include <string.h>
/**
 * _strncat - concatnet two strings
 * @dest: value that accept
 * @src: value to be added
 * @n: number of concateneted chars
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
