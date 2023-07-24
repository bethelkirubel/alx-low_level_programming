#include "main.h"
#include <stdio.h>

/**
  * print_line - Draws a straight line according to parameter
  * @n: The number of lines to draw
  *
  * Return: empty
  */
void print_diagonal(int n)
{
int x, y;

if (n <= 0)
{
putchar('\n');
}
else 
{
for (x = 0; x < n; x++)
{
for (y = 0; y < n; y++)
{
if (x > y) 
{
putchar(' ');
}
else if (x == y)
{
putchar('\\');
}
}
}
putchar('\n');
}
}
