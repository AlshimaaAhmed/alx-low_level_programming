#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: the stract variable
 * @name: the name member of the variable
 * @age: the ade mamber of the variable
 * @owner: the owner mmember of the variable
 * Description: long description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
