#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - uses functon that is represented as an element of an array
 * @array: pointer to the function
 * @size: size of string
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (!action || !array)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
