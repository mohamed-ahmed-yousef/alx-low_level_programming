#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: 1st string.
 * @s2: 2nd string
 * @n: number of char to take from string 2.
 * Return: If the function fails, it should return NULL
 *          If n is greater or equal to the length of s2
 *          then use the entire string s2
 *          if NULL is passed, treat it as an empty string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
char *store;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

if (n >= len2)
n = len2;

store = malloc(n + len1 + 1);

if (store == NULL)
return (NULL);

while (s1[i] != '\0')
{
store[i] = s1[i];
i++;
}
while (j < n)
{
store[i] = s2[j];
j++;
i++;
}

store[i] = '\0';
return (store);
}
