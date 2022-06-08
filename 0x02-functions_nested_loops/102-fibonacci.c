#include <stdio.h>
int main(void)
{
int first, second, next;
first = 1;
second = 2;
next = first + second;
printf("%d, %d, ", first ,second);
int i;
for (i = 3; i <= 50; i++)
{
printf("%d, ", next);
first = second;
second = next;
next = first + second;
}
}
