#include "main.h"
/**
 *main - prints lower case letter in function
 *return: 0 nothing to return
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
putchar(x);
}
putchar('\n');
}
