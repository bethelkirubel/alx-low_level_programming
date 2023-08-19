#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - instialize the struct dog
 * @d: pointer where he struct dog is derefrenced
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != 0)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
