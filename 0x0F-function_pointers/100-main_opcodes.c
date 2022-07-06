#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i, n_byte;
char *ch;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
n_byte = atoi(argv[1]);
if (n_byte < 0)
{
printf("Error\n");
exit(2);
}
ch = (char *)main;
for (i = 0; i < n_byte; i++)
{
if (i == n_byte - 1)
{
printf("%02hhx ", ch[i]);
break;
}
printf("%02hhx ", ch[i]);
}
printf("\n");
return (0);
}
