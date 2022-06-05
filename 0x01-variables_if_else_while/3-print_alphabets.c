#include <stdio.h>
/**
 *main - print all alphabets in lower and upper case
 *Return: returns 0 value
 */
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
for (x = 'A'; x <= 'Z'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
