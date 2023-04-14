#include <stdio.h>
#include <string.h>
int main(void)
{
    char s2[] = "Hello";
    char s1[] = "H";
    printf("%d\n",strcmp(s1,s1));
    
    int len1 = 0;
    int len2 = 0;
    int loop=0;
    int i=0;

    while (s1[len1] != '\0')
    len1++;
    while (s2[len2] != '\0')
    len2++;
    
    if (len1>len2)
    loop = len2;
    else
    loop = len1;


    for (i = 0; i < len1; i++)
    {
        if (s1[i] != s2[i])
        {
        printf("%d",(int)s1[i]-(int)s2[i]);
        return 0;
        }
    }
    if (len1 > len2)
    printf("%d",(int)s1[i]);
    else if (len1 < len2)
     printf("%d",(int)s1[i]);
    printf(("%d"), 0);



}