#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets a specific bit to 1
 * @n: the number
 * @index: the position
 * Return: -1 or the new number
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
int set;

if (index > 63)
return (-1);

set = 1 << index;
*n = *n | set;
return (1);
}
