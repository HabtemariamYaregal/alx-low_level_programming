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
if (x != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
