#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: no.of elements
 * @...: all arguments pass.
 * Return: return the element.
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0, i = 0;
va_list ptr;

if (n == 0)
return (0);

va_start(ptr, n);

for (i = 0; i < n; i++)
{
sum += va_arg(ptr, int);
}
va_end(ptr);
return (sum);
}
