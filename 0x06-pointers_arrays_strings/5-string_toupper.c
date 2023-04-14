#include <stdio.h>
/**
 * string_toupper - convert to uppercase
 * @str: string to make it uppercase.
 * Return: return the upper case string.
*/
char *string_toupper(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		int store = ((int)str[len] - 32);

		if ((int)str[len] >= 97 && (int)str[len] <= 123)
			str[len] = (char)store;
		len++;
	}
	return (str);
}
