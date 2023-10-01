#include "main.h"
#include <stdio.h>

/**
 * flip_bits - prints number of bits to change
 * @n: binary 1
 * @m: binary 2
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned long int count = 0;

while (x)
{
count += x & 1;
x >>= 1;
}

return (count);
}

