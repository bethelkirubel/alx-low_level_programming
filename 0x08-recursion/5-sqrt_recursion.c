#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - finds the square root of an intiger
 * @n: number
 *
 * Return: square root
 */

int _sqrt_recursion(int n, int i)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (0);
}
else if (i * i == n)
{
return (i);
}
else if (n != i * i)
{
return (-1);
}
return (_sqrt_recursion(n, 0));
}
