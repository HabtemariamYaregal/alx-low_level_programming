#include "main.h"
/**
 *print_aphabet_x10 - print alphabets 10 times
*/
void print_alphabet_x10(void)
{
char x;
int y = 0;
while (y < 10)
{
for (x = 97; x < 120; x++ )
{
purtchar(x);
}
putchar('/n');
y++;
}
}
