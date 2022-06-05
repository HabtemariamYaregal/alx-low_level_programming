#include <stdio.h>
/**
 *main - print all single digit
 *Return: returns 0 value
 */
int main(void)
{
int x;
for (x = 48; x < 58; x++)
{
putchar(x);
}
for (x = 97; x <= 102; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
