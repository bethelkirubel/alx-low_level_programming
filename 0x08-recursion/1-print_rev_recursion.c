#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - reverses a string
 * @s: string
 * Return: reversed string
 */

void _print_rev_recursion(char *s)
{
if (*s)
_print_rev_recursion(s + 1);
_putchar(*s);
}
