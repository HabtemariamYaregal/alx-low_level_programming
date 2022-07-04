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
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
