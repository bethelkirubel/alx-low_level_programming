#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set a speciic bit to 0
 * @n: the number
 * @index: the specific position
 * Return: -1 o r the number
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
int set;

if (index > 63)
return (-1);

set = 1 << index;
*n = *n & (~set);
return (1);
}
