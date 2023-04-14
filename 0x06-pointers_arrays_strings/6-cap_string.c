#include "main.h"
#include <stdio.h>
/**
 * cap_string - captalize the string
 * @str: string to captialzie
 * Return: always return capatialze string.
*/
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i - 1 >= 0)
		{
			if (str[i - 1] == ' ' || str[i - 1] == '?' || str[i - 1] == '"' ||
				str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' ||
				str[i - 1] == ')' || str[i - 1] == ')' || str[i - 1] == '{' ||
				str[i - 1] == ',' || str[i - 1] == '}' || str[i - 1] == '\n' ||
				str[i - 1] == '\t')
			{
				int store = ((int)str[i] - 32);

				if ((int)str[i] >= 97 && (int)str[i] <= 123)
					str[i] = (char)store;
			}
		}
		i++;
	}
	return (str);
}
