#include "main.h"

/*
 * print_to_98 - print natural number between any passed integer and 98
 * @n: intiger input
 */

void print_to_98(int n)

{

if (n <= 98)
{
_putchar (n);
_putchar (',');
_putchar (' ');
n++;
}
else if (n > 98)
{
_putchar (n);
_putchar (',');
_putchar (' ');
n--;
}
}
