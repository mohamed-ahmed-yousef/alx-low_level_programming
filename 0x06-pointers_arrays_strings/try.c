#include <stdio.h>

int main(void)
{

	int len=0;
	int me=0;
    char dest[98] = "Hello ";
    char src[] = "World!\n";

	while (dest[me] != '\0')
	me++;

    printf("%d",me);
	while (src[len] != '\0')
	{
		dest[me+len-1]=src[len];
		len++;
	}
    printf("%s",dest);
    return (0);
}