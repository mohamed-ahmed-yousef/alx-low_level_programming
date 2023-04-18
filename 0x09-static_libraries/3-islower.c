#include "main.h"

/**
 * _islower - check is lower or not.
 * @c:  char to check it.
 * Return: Always 1 if lower and 0 if not.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
