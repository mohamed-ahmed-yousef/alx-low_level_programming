#include <stdio.h>
#include <string.h>


int main()
{
    char s[]="my School";
    int i = 0;
	int n = strlen(s);
	int x = n / 2;

	for (i = 0; i < x; i++)
	{
		char c = s[i];

		s[i] = s[n - i - 1];
		s[n - i - 1] = c;
	}
    printf("%s",s);
}
