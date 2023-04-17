#include "main.h"
/**
 * _puts_recursion - implement puts using recursion.
 * @s: string to print it.
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(++s);
}
