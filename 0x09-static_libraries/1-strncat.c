#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - catenation of two strings
 * @src: appending
 * @dest: where the src is appended upon
 * @n: number of bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int dest_len = 0;

while (dest[i++])
dest_len++;

for (i = 0; i < n && src[i]; i++)
dest[dest_len++] = src[i];

return (dest);
}

