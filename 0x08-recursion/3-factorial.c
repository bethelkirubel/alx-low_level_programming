#include "main.h"
#include <stdio.h>

/**
 * factorial - multiplies numbers recursively
 * @n: input number
 *
 * Return: factorial
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (0);
}
else if (n == 1)
{
return (1);
}
else
return (n = n * factorial(n - 1));
}
