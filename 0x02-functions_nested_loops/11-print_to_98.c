#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check the the entry to deteminate if is lower or upper
 *
 * @n: This is the entry
 * Return: Always 0.
 */

void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 97; n++)
{
_putchar(n);
_putchar(',');
_putchar(' ');
}
}
else
{
for (; n > 98; n--)
{
_putchar(n);
_putchar(',');
_putchar(' ');
}
}
}
