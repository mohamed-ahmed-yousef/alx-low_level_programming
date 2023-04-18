#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - print program name
 * @argc: argument count
 * @argv: argument vector.
 * Return: return 0 if sucessful.
*/
int main(int argc, char *argv[])
{
int result = 0, i, n, loop, len;

for (i = 1; i < argc; i++)
{
len = strlen(argv[i]);
loop = 0;
while (len--)
{
char c = argv[i][loop];
loop++;
if (!isdigit(c))
{
printf("Error\n");
return (1);
}
}
n = atoi(argv[i]);
result += n;
}
printf("%d\n", result);
return (0);
}
