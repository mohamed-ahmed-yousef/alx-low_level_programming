#include "main.h"
int help(int n, int i);
/**
 * is_prime_number - check is prime or not
 * @n: the number check it.
 * Return: 1 is prime or 0 is not.
*/
int is_prime_number(int n)
{
    return help(n,2);
}
/**
 * help - check is prime or not
 * @n: the number check it.
 * @i: to make like a loop on it.
 * Return: 1 is prime or 0 is not.
*/
int help(int n, int i)
{
    if (n < 2)
    return 0;
    if (n == 2)
    return 1;
    if (n % i == 0)
    return 0;
    if (i * i > n)
    return 1;
    return help(n, i + 1);
}