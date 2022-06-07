#include "main.h"
/**
 *main - prints lower case letter in function
 *Return: 0 nothing to return
*/
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
char x;
for (x = 'a'; x < 'z'; x++ )
{
_putchar(x);
}
_putchar('\n');
}
