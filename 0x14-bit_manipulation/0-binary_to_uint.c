#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts binary to uint
 * @b: binary to be converted
 * Return: uint
 */

unsigned int binary_to_uint(const char *b)
{
int len = strlen(b);
int result = 0;
int i;

for (i = 0; i < len; i++)
{
if (b[i] == '1')
result = (result << 1) | 1;
else if (b[i] == '0')
result = result << 1;
else
return (0);
}

return (result);
}
