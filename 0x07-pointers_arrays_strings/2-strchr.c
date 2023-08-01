#include "main.h"
#include <stddef.h>

/**
 * _strchr - finds char in c and prints the rest of the string
 *@s: string
 *@c: the first char
 *Return: pointer that points to the string starting from char c
 */

char *_strchr(char *s, char c)
{
unsigned int i;

for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
	;
if (s[i] == c)
return (s + i);
else
return (NULL);
}
