#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print natural number between any passed integer and 98
 * @n: intiger input
 */

void print_to_98(int n)
{
int i, j;

if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (n == 98)
{
_putchar(n);
}
else if (n != 98)
{
_putchar (n);
_putchar(',');
_putchar(' ');
}
}
}
else if (n > 98)
{
for (j = n; j >= 98; j++)
{
if (n != 98)
{
_putchar (n);
_putchar (',');
_putchar (' ');
}
else if (n == 98)
{
_putchar (n);
}
}
}
_putchar('\n');
}
