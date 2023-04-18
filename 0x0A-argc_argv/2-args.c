#include <stdio.h>
/**
 * main - print program name
 * @argc: argument count
 * @argv: argument vector.
 * Return: return 0 if sucessful.
*/
int main(int argc, char *argv[])
{
    while (argc--)
        printf("%s\n", *argv++);
    return(0);
}
