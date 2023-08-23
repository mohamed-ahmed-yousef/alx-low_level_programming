#include <unistd.h>

/**
 * _putchar - to pirnt char
 * @c: character to print
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
