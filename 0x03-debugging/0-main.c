#include <stdio.h>

/**
* positive_or_negative - tests function that prints if integer is positive
*
* This function check the number sign.
*@i: number needed to check
*/

void positive_or_negative(int i)
{
	if (i > 0)
	printf("%d is positive", i);
	else if (i < 0)
	printf("%d is negative", i);
	else
	printf("%d is zero", i);
	printf("\n");
}
