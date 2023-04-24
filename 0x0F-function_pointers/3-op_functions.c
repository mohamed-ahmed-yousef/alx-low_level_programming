#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - function 
 * @a: argument one
 * @b: argument two
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function 
 * @a: argument one
 * @b: argument two
 *
 * Return: sum
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function 
 * @a: argument one
 * @b: argument two
 *
 * Return: sum
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function 
 * @a: argument one
 * @b: argument two
 *
 * Return: sum.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - function 
 * @a: argument one
 * @b: argument two
 *
 * Return: sum
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}