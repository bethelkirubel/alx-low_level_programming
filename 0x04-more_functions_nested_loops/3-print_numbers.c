#include "main.h"
#include <stdio.h>

/**
  * print_numbers - Print the numbers since 0 up to 9
  *
  * Return: The numbers since 0 up to 9
  */
void print_numbers(void)
{
int n;

for (n = 0; n <= 9; n++)
{
putchar(n + '0');
}
putchar('\n');
}
