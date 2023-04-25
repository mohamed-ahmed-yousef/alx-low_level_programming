#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints numbers, followed by a new line.
 * @format: our format.
 * @...: all arguments pass.
 * Return: return the element.
*/
void print_all(const char * const format, ...)
{
int i = 0;
char *sep = "", *str;
va_list ptr;
va_start(ptr, format);

if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(ptr, int));
sep = ", ";
break;

case 'i':
printf("%s%d", sep, va_arg(ptr, int));
sep = ", ";
break;
case 'f':
printf("%s%f", sep, va_arg(ptr, double));
sep = ", ";
break;
case 's':
str = va_arg(ptr, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", sep, str);
sep = ", ";
break;

default:
break;
}
i++;
}
}
va_end(ptr);
printf("\n");
}
