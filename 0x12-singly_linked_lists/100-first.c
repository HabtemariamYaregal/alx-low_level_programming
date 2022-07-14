#include <stdio.h>

void first_from_main(void) __attribute__ ((constructor));

/**
 * first_from_main - prints a sentence before the main
 * function is executed
 */
void first_from_main(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
