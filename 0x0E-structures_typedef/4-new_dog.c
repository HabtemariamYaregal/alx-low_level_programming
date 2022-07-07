#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * *new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog;
int name_l = 0, own_l = 0;
if (name != NULL && owner != NULL)
{
name_l = _strlen(name) + 1;
own_l = _strlen(owner) + 1;
my_dog = malloc(sizeof(dog_t));
if (my_dog == NULL)
{
return (NULL);
}
my_dog->name = malloc(sizeof(char) * name_l);
if (my_dog->name == NULL)
{
free(my_dog);
return (NULL);
}
my_dog->owner = malloc(sizeof(char) * own_l);
if (my_dog->owner == NULL)		{
free(my_dog->name);
free(my_dog);
return (NULL);
}
my_dog->name = _strcpy(my_dog->name, name);
my_dog->owner = _strcpy(my_dog->owner, owner);
my_dog->age = age;
return (my_dog);
}

/**
 * _strlen - count length of a string
 * @s: string to be counted
 * Return: string length
 */
int _strlen(char *s)
{
int c = 0;
for (; *s != '\0'; s++)
{
c++;
}
return (c);
}
/**
 * _strcpy - copies a string
 * @dest: where the copied valeu goes
 * @src: where the copied valeu comes
 * Return: dest and copied value
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
