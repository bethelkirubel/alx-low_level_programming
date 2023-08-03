#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - finds the power of a number raised to another number
 * @x: number to be raised
 * @y: number rasied to y
 *
 * Return: result
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x  = x *  _pow_recursion(x, y - 1));
}
