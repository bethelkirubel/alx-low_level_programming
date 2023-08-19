#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the struct dog
 * @d: pointer wher the struct dog is dereferenced
 */
void print_dog(struct dog *d)
{

if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";

if (d != NULL)
{
printf("Name: %s\n", (*d).name);
printf("Age: %f\n", (*d).age);
printf("Owner: %s\n", (*d).owner);
}
else
return;
}
