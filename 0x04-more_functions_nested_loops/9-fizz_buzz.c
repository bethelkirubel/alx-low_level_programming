#include <stdio.h>
#include "main.h"

/**
 *main - program that prints either number
 *or fizz or buzz or fizzBuzz
 *
 *
 *Return: returns 0
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
putchar('\n');
return (0);
}
