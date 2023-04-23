#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - that executes a function given as a 
 *                  parameter on each element of an array.
 * @size:  size of the array
 * @action: is a pointer to the function you need to use
 * @array: pointer of array.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i = 0;
for (i = 0; i< size; i++)
{
action(array[i]);
}
}