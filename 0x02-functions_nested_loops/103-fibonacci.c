#include <stdio.h>
/**
 * main - print sum of even fibonacci
 * Return: 0
*/
int main(void)
{
long int first, second, next, i, sum = 0;
first = 1;
second = 2;
next = first + second;
for (i = 3; i <= 50; i++)
{
first = second;
second = next;
next = first + second;
if (first < 4000000)
{
if (first % 2 == 0)
{
sum = sum + first;
}
}
}
printf("%ld\n", sum);
return (0);
}
