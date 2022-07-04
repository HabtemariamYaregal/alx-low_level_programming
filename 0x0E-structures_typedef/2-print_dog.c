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
return;
}
if (d->name == NULL)
{
d->name = "(nil)";
}
if (d->owner == NULL)
{
d->owner = "(nil)";
}
printf("Name: %s\n", d->name);
printf("Name: %f\n", d->age);
printf("Name: %s\n", d->owner);
}
