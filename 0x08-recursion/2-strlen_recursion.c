#include "main.h"
/**
 * _strlen_recursion - len in recursion.
 * @s: string to find it's lenght.
 * Return: len of string.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
