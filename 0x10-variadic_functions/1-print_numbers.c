#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: our seperator.
 * @...: all arguments pass.
 * @n: no.of elements
 * Return: return the element.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ptr;
unsigned int i = 0;

va_start(ptr, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(ptr, int));
if (i + 1 < n && separator != NULL)
{
printf("%s", separator);
}

}
printf("\n");
va_end(ptr);
}
