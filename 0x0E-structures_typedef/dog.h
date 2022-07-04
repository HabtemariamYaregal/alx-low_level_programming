#ifndef DOG_H
11;rgb:0000/0000/0000#define DOG_H
/**
 * struct dog - about dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 * Description: Longer description
*/
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
