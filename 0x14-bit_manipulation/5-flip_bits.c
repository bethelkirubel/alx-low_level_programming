#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits that should be flipped
 * @n: number 1
 * @m: number 2
 * Return: the number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int flips = 0;

for ( ; n || m ; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
flips++;
}
return (flips);
}
