#include "main.h"
#include <stdio.h>

/**
 * get_endianness - tells whether it is big or little endian
 *
 *
 * Return: 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
char *c;
int n;

c = (char *) &n;
if (*c == 1)
return (0);
else
return (1);
}
