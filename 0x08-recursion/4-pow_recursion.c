#include "main.h"
/**
 * _pow_recursion - power using recursion
 * @x: the number to power is.
 * @y: power
 * Return: the value to return it.
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
