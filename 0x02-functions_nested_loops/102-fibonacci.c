#include <stdio.h>
/**
 * main - print fibonacci
 * Return: 0
*/
int main(void)
{
long int first, second, next, i;
first = 1;
second = 2;
next = first + second;
printf("%ld, %ld, ", first, second);
for (i = 3; i <= 50; i++)
{
if (i == 50)
{
printf("%ld", next);
}
else
{
printf("%ld, ", next);
}
first = second;
second = next;
next = first + second;
}
printf("\n");
return (0);
}
