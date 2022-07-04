#include <stdio.h>
#include "dog.h"
/**
 * init_dog - intialize a variable of type dog
 * @d: address of struct
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog));
}
d->name = name;
d->age = age;
d->owner = owner;
}
