#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - prints the length of the string
 * @s: string
 */

int _strlen_recursion(char *s)
{

if (*s == '\0')
{
return (0);
}
return (_strlen_recursion(s + 1) + 1);
}
