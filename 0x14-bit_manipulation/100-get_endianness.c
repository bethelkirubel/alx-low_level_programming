#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks for endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
unsigned long int r = 1;
char *c = (char *)&r;

return ((int)*c);
}

