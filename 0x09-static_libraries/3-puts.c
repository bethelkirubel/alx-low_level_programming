#include "main.h"
#include <stdio.h>

/**
 * _puts - Display a string
 * @str: String to show
 *
 * Return: Nothing
 */

void _puts(char *str)

{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');
}

