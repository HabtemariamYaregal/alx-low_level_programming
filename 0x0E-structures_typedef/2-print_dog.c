#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - print the struct dog
 * @d: address of struct
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
printf("(nil)");
}
if (d->name == NULL)
{
printf("Name: (nil)");
}
printf("Name: %s\n", d->name);
printf("Name: %f\n", d->age);
printf("Name: %s\n", d->owner);
}
