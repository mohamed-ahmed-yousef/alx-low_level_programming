#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print program name
 * @argc: argument count
 * @argv: argument vector.
 * Return: return 0 if sucessful.
*/
int main(int argc, char *argv[])
{
int result = 0, i;

for (i = 1; i < argc; i++)
{
char c = argv[i][0];
int n = atoi(argv[i]);

if (!isdigit(c))
{
printf("Error\n");
return (1);
}
result += n;
}
printf("%d\n", result);
return (0);
}
