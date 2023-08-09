#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - prints a certain byte certain times in a certain array
 *@s: string
 *@b: byte to be replaced
 *@n: number of times b is replaced
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}

