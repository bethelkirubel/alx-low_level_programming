#include <stdio.h>
#include "main.h"

/**
  * print_most_numbers - Print the numbers since 0 up to 9
  *
  * Description: Prints the numbers excluding 2 and 4
  *
  * Return: The numbers since 0 up to 9
  */

void print_most_numbers(void)
{
int n;

for (n = 0; n <= 9; n++)
{
if ((n == 2) || (n == 4))
{
continue;
}
else
{
putchar(n + '0');
}
}
putchar('\n');
}
