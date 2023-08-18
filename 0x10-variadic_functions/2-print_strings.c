#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed
 * @n: number of elements in the list
 * Return: the string of nil or nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *str;
va_list num;


va_start(num, n);
for (i = 0; i < n; i++)
{
str = va_arg(num, char *);
printf("%s", str);
if (str == NULL)
printf("nil");
if (separator != NULL && i < n - 1)
printf("%s", separator);
}

printf("\n");
va_end(num);
}
