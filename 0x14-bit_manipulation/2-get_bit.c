#include "main.h"
#include <stdio.h>

/**
 * get_bit - reetrives the bit in that specific index
 * @n: number input
 * @index: the position that we want to retrieve
 * Return: -1 or the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);
if (index == 0)
return (n & 1);

return (get_bit(n >> 1, index - 1));
}

