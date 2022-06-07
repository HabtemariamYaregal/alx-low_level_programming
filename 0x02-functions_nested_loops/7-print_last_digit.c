#include "main.h"
/**
 * print_last_digit - chech sign
 * Return: last digit of a number
 * @n: parameter to be checked
*/
int print_last_digit(int n)
{
if (n > 0)
{
return (n % 10);
}
else 
return (-n % 10);
}
