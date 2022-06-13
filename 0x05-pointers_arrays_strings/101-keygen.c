#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate random password
 * Return: 0
*/
int main(void)
{
int i;
char n;
for (i = 0; i < 10; i++)
{
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%c", n);
}
return (0);
}
