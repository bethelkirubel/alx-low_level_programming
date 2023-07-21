#include "main.h"


/**
  * times_table - Prints the 9 times table, starting with 0
  *
  * Return: empty output
  */

void times_table(void)
{
int i = 0, j, k;

while (i < 10)
{
j = 0;
while (j < 10)
{
k = 0;
k = i * j;
_putchar(k);
_putchar(',');
_putchar(' ');
j++;
}
_putchar('\n');
i++;
}
}
