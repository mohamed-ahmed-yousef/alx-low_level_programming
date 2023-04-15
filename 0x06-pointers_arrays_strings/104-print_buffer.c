#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void start(int number);
void second(int number, char *string, int flag);
/**
 * print_buffer - print the content of size bytes of the buffer pointed by b
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
	int line = 0;
	int flag = 0;

	for (line = 0; line < size / 10; line++)
	{
		start(line * 10);
		second(line * 10, b, flag);

		printf("\n");
	}
	if (size % 10)
	{
		start(line * 10);
		flag = size;
		second(10 * (line), b, flag);
		printf("\n");
	}
}
/**
 * start- print first part of code
 * @number: number to start loop;
*/
void start(int number)
{

	/*number *= 10;*/
	printf("%08x", number);
}
/**
 * second - print the second & thrid part of code.
 * @number: number to start loop on it.
 * @string: string to loop on it.
 * @flag: to pass size%10 if need.;
*/
void second(int number, char *string, int flag)
{
	int i = number;
	int toloop = 0, x = 0;

	printf(": ");
	if (flag)
		toloop = number + flag % 10;
	else
		toloop = number + 10;

	for (i = number; i < toloop  ; i++)
	{
		char hex[3];

		sprintf(hex, "%02x", string[i]);
		printf("%s", hex);
		if (i != number && i % 2 == 1)
		printf(" ");
	}
	while (toloop < number + 10)
	{
		printf("  ");
		toloop++;
		x++;
		if (toloop % 2 == 1)
		printf(" ");
	}
	printf(" ");
	toloop -= x;

	for (i = number; i < toloop; i++)
	{
		if (!isprint(string[i]) || string[i] == '\n')
		printf(".");
		else
		printf("%c", string[i]);
	}

}
