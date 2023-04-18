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
int i = 0, count = 0, num;
int arr[5] = {25, 10, 5, 2, 1};

if (argc == 1)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);

while (num > 0)
{
if (num >= arr[i])
{
num -= arr[i];
count++;
}
else
i++;
}
printf("%d\n", count);
return (0);
}
