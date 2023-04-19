#include "function_pointers.h"
#include<stdlib.h>
/**
 * print_name - function to print name
 * @name: person to print
 * @f: pointer to
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
