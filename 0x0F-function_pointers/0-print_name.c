#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - print name
 * @name: thename input
 * @f: the function tha points to print_name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
