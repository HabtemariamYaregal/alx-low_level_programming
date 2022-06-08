#include <stdio.h>
int main(void)
{
int first, second, next, i;
first = 1;
second = 2;
next = first + second;
printf("%d, %d, ", first ,second);
for (i = 3; i <= 50; i++)
{
printf("%d, ", next);
first = second;
second = next;
next = first + second;
}
printf("\n");
return (0);
}
