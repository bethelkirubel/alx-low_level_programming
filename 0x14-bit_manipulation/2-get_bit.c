#include "main.h"
#include <stdio.h>

/**
 * get_bit - gets bit in that specific index
 * @n: the number in binary
 * @index: the position
 * Return: 1 or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(n) * 8))
return (-1);
return ((n >> index) & 1);
}
