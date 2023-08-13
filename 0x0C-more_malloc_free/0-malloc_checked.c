#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function should cause termination with a status value of 98
 * @b: number of block to reserve in malloc
 * Return: pointer of malloc
 */
void *malloc_checked(unsigned int b)
{
void *cat;
cat = malloc(b);

if (cat == NULL)
{
exit(98);
}
return (cat);
}
