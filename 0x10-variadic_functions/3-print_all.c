#include "variadic_functions.h"

/**
 * print_all - print all types
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
unsigned int i = 0;
char *str, *sep = "";
va_list num;

va_start(num, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(num, int));
break;
case 'i':
printf("%s%d", sep, va_arg(num, int));
break;
case 'f':
printf("%s%f", sep, va_arg(num, double));
break;
case 's':
printf("%s%s", sep, va_arg(num, char *));
break;
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;

default:
i++;
continue;
}
sep = ", ";
i++;
}
}
printf("\n");
va_end(num);
}
