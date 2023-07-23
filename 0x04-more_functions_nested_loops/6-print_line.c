#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a straight line according to parameter
 * @n: The number of lines to draw
 *
 * Return: empty
 */

void print_line(int n)
{
int x;

if (n > 0)
{
for (x = 0; x < n; x++)
{
putchar('_');
}
putchar('\n');
}
else
{
putchar('\n');
}
}
