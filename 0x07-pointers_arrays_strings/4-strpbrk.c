#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function locates the first 
 * occurrence in the string s of any of the bytes in 
 * the string accept
 * @s: main string.
 * @accept: checked string.
*/
char *_strpbrk(char *s, char *accept)
{
    int i = 0, j = 0;
    
    for (i = 0; s[i] != '\0'; i++)
    {
        int curri = *s++;
        for (j = 0; accept[j] != '\0'; j++)
        {
            int currj = *accept++;
            if (curri == currj)
            return (s-1);

        }
    }
    return (NULL);

}