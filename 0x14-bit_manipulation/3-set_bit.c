#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets bits to 1
 * @n: the binary
 * @index: position
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(n) * 8)
return (-1);

*n |= (1UL << index);
return (1);
}
