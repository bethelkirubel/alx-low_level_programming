#include <stdio.h>
#include "main.h"

/**
 *main - Prints a Fizz Buzz program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i <= 9)
{
putchar(i + '0');
}
else if (i > 9)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
}
putchar(' ');
}
return (0);
}
