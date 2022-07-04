#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - print the struct dog
 * @d: address of struct
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
{
d->name = "(nil)";
}
if (d->owner == NULL)
{
d->owner = "(nil)";
}
if (d->age == 0.0)
{
  d->age = 0.0;
} 
printf("Name: %s\n", d->name);
printf("Name: %f\n", d->age);
printf("Name: %s\n", d->owner);
}
}
