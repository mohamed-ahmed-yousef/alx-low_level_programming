#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[]="EBG13";
    char s1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[]="NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (s[i] == s1[j])
            {
			    s[i] = s2[j];
                break;

            }
		}
        printf("%s", s);
	}


    printf("%s", s);


}