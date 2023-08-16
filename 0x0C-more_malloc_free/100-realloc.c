#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a new memory to a pointer
 * @ptr: points to the old allocated memory
 * @old_size: size of the old memory
 * @new_size: size of the new memory
 * Return: pointer to newly allocated memory or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *reptr;
char *old = ptr;

if (new_size == old_size)
return (ptr);
else if (ptr == NULL)
{
reptr = malloc(new_size);
return (reptr);
}
else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else
{
reptr = malloc(new_size);
if (reptr != NULL)
{
if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
reptr[i] = old[i];
free(ptr);
return (reptr);
}
else
{
for (i = 0; i < new_size; i++)
reptr[i] = old[i];
free(ptr);
return (reptr);
}
}
else
return (NULL);
}
}
