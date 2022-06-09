#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <time.h>
/* more headers goes there */

/**
 *main - check weather a number is positive or negative
 *Return: returns 0 value
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
printf("%d is zero\n", n);
return (0);
}
