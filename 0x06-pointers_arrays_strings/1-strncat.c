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
strncat(dest, src, n);
return (dest);
}
