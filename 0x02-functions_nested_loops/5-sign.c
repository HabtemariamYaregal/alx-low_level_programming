#include "main.h"
/**
 * print_sign - chech sign
 * Return: 1, if number is positive
 * 0, number is 0
 * -1, numbe ris negative
 * @n: parameter to be checked 
*/
int print_sign(int n)
{
if (n > 0)
{
printf("+");
return 1;
}
else if (n == 0)
{
printf("0");
return 0;
}
else
{
printf("-");
return -1;
}
}
