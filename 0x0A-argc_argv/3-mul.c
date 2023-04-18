#include <stdio.h>
#include <stdlib.h>
/**
 * main - print program name
 * @argc: argument count
 * @argv: argument vector.
 * Return: return 0 if sucessful.
*/
int main(int argc, char *argv[])
{
(void)argc;
if (argc == 1)
printf("Error\n");
else
{
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
long int a = num1;
long int b = num2;
printf("%ld\n", a * b);
}
return (0);
}
