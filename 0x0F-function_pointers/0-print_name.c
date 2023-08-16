#include "function_pointers.h"
#include <stdlib.h>


/**
 * print_name - print name
 * @name: thename input
 * @f: the function tha points to print_name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;
(*f)(name);
}
