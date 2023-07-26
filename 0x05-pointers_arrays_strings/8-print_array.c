#include "main.h"
#include <stdio.h>

/**
  * print_array - prints all elements of an array of integers
  * follwed by new line
  * @n: is the numbers of arrays
  * @a: intger
  * Return: value of array in @a
  */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i == 0)
{
printf("%d", a[i]);
}
else
{
printf(", ");
printf("%d", a[i]);
}
}
printf("\n");
}
