#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of intigers
 * @min: the smallest intiger
 * @max:  the largest intiger
 * Return: pointer to array of intigers or NULL
 */

int *array_range(int min, int max)
{
int i, len;
int *aptr;

if (min > max)
return (NULL);

len = max - min + 1;
aptr = malloc(sizeof(int) * len);

if (aptr == NULL)
return (NULL);

for (i = 0; i < len; i++)
aptr[i] = min++;

return (aptr);
}
