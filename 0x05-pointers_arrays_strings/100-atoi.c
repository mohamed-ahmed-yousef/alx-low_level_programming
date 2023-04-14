#include "main.h"
#include <stdio.h>


/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int sign = 0;
	int n = 0;
	int i = 0;
	int digit = 0;
	int store = 0;
	int toBreak=0;

	while (s[n] != '\0')
	n++;

	for (i = 0 ; i < n; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			store = s[i] - '0';
			digit = store + 10 * digit;
			toBreak = 1;

		}
		else if (toBreak == 1 && digit > 0){
			break;
		}
		else if (s[i] == '-' || s[i] == '+' || s[i] == ' ')
		{
			if (s[i] == '-' )
			sign++;
		}
	}
	if (sign % 2 != 0)
	digit = -digit;
	return (digit);
}
