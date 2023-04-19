#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - function
 * @a: address
 * @n: number
 */
void print_opcodes(char *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%.2hhx", a[i]);
if (i < n - 1)
printf(" ");
}
printf("\n");

}

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: integer
 */
int main(int argc, char **argv)
{
int a;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
a = atoi(argv[1]);
if (a < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, a);
return (0);
}
