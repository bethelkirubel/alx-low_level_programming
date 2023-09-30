#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the bit to 0
 * @n: the binary
 * @index: the position
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(n) * 8)
return (-1);

*n &= ~(1UL << index);
return (1);
}
