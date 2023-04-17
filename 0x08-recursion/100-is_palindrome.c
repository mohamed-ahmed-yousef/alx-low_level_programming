#include "main.h"
#include <stdio.h>
int help(char *s, int start, int len);
int helpLen(char *s);
/**
 * is_palindrome - check is prime or not
 * @s: the string check it.
 * Return: 1 is palindrome or 0 is not.
*/
int is_palindrome(char *s)
{
int len = helpLen(s) - 1;
return (help(s, 0, len));
}
/**
 * help - check is prime or not
 * @s: the string check it.
 * @start: start from 0
 * @len: start from len -1 of string.
 * Return: 1 is palindrome or 0 is not.
*/
int help(char *s, int start, int len)
{
if (s[start] != s[len])
return (0);

if (start >= len)
return (1);
return (help(s, start + 1, len - 1));
}
/**
 * helpLen - find the lenght of string.
 * @s: the string check it.
 * Return: length of string.
*/
int helpLen(char *s)
{
if (*s == '\0')
return (0);
return (1 + helpLen(s + 1));
}
