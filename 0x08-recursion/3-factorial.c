#include "main.h"
/**
 * factorial - return factorial of n
 * @n: number to find factorial
 * Return: return the factorial of string.
*/
int factorial(int n)
{
if (n == 0)
return (1);
if (n < 0)
return (-1);
else
return (n * factorial(n - 1));
}
