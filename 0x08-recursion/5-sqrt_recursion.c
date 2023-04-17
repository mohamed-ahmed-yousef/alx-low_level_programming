#include "main.h"
int _sqrt(int n, int curr);
/**
 * _sqrt_recursion - sqrt using recursion
 * @n: the number to sqrt to it.
 * Return: the value to return it.
*/
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 *  _sqrt - help main function.
 * @n: the number to sqrt to it.
 * @curr: start with i = 1;
 * Return: the value to return it.
*/
int _sqrt(int n, int curr)
{
if (curr * curr > n)
return (-1);
if (n == curr * curr)
return (curr);
_sqrt(n, curr + 1);
}
