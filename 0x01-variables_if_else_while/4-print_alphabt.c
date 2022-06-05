#include <stdio.h>
/**
 *main - print all alphabets in lowercase except q and e
 *Return: returns 0 value
 */
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
if (x == 'q')
{
continue;
}
else if (x == 'e')
{
continue;
}
putchar(x);
}
putchar('\n');
return (0);
}
