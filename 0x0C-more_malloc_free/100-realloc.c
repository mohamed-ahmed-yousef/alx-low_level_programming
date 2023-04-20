#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * --------
 * @ptr:  pointer to the memory previously allocated with a call to malloc.
 * @old_size:  is the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block
 * -----------
 * Return: If new_size > old_size, the “added” memory should
 *          not be initialized
 * -     : If new_size == old_size do not do anything and return ptr
 * -     : If new_size = zero : return NULL.
 * -     : Don't Forget to free ptr.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *arr;
int i = 0;

char *ptr1;

if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (new_size == old_size)
return (ptr);

arr = malloc(new_size);
ptr1 = ptr;

for (i = 0; i < new_size; i++)
{
if (i > old_size)
{
free(ptr);
return (arr);
}
arr[i] = ptr1[i];
}

free(ptr);
return (arr);
}
