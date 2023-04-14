#include "main.h"
/**
 * leet - encode string.
 * @str: string to encode it.
 * Return: return encoded string.
*/
char *leet(char *str)
{
	char letter[] = {'a', 'e', 'o', 't', 'l'};
	int number[] = {4, 3, 0, 7, 1};
	int i, j;

	i = 0;
	j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letter[j] || (int)str[i] + 32 == (int)letter[j])
				str[i] = number[j] + '0';
		}
	}
	return (str);
}
