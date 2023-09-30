#include "main.h"
#include <stdio.h>

/**
 * print_binary - divides until the reminder becomes 1
 * @n: the number
 */

void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n / 2);
}
printf("%ld", n % 2);
}
