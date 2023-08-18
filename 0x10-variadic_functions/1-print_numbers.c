#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: string separating the listed numbers
 * @n: number of arguments
 * Return: the list or nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list num;
unsigned int i = 0;


va_start(num, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(num, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(num);
}
