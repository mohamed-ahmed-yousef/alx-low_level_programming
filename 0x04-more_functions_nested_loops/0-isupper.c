#include "main.h"
/**
* _isupper -  function check upper case for string
*
*@c: the char
* Return: Always return 0 or 1
*/
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	return (1);
	return (0);
}
