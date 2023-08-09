#include "main.h"

/**
 * _memcpy - copies elements of another array to a given array
 * @dest: array output and to be added upon
 * @src: array input and added
 * @n: bytes of memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

