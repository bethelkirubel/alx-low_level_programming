#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - checks if it is an intiger
 * @array: the string to be checked
 * @size: size of the array
 * @cmp: compares two intigers byte by byte
 * Return: the index of the intiger  found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
