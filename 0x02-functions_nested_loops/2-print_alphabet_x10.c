#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
*/
void print_alphabet_x10(void)
{
char x;
int y = 0;
while (y < 10)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
y++;
}
}
