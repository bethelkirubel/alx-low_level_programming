#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to undigned int
 * @b: input
 * Return: NULL or the converted one
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int value = 0;

if (b == NULL)
return (0);

while (*b != '\0')
{
value = value << 1;
if (*b != '0' && *b != '1')
return (0);
else if (*b == '1')
value = value | 1;
b++;
}
return (value);
}
