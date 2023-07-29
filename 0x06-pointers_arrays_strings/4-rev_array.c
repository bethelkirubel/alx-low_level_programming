#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array
 * @a: string
 * @n: intiger
 * return: zero
 */
void reverse_array(int *a, int n)
{
int i, tmp;

for (i = 0; i < n / 2; i++)
{
tmp = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = tmp;
}
}
