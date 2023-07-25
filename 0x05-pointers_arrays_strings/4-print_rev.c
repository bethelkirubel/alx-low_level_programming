#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Display a string s in reverse sense.
 * @s: string to reverse
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
int i = 0;
for (i = strlen(s) - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
