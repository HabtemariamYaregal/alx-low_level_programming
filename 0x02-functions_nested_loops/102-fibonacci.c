#include <stdio.h>
int main(void)
{
long int first, second, next, i;
first = 1;
second = 2;
next = first + second;
printf("%ld, %ld, ", first ,second);
for (i = 3; i <= 50; i++)
{
printf("%ld, ", next);
first = second;
second = next;
next = first + second;
}
printf("\n");
return (0);
}
