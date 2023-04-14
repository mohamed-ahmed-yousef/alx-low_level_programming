#include <stdio.h>
#include <string.h>
int main(void)
{
    
    if (n < 0)
	{
		n=-n;
		_putchar('-');
	}
	while (n / 10 > 0)
	{
		n = n / 10;
	}
	_putchar(n % 10 + '0');


}