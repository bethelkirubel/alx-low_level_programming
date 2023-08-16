#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc - reserves memory for an array
 * @nmemb: number of elements in array
 * @size: number of bit of each element
 * Return: new pointer locating the memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *mptr;

if (size == 0 || nmemb == 0)
return (NULL);

mptr = malloc(size * nmemb);

if (mptr == NULL)
return (NULL);

for (i = 0; i < (size * nmemb); i++)
mptr[i] = 0;

return (mptr);
}
