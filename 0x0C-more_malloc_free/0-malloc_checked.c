#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - that allocates memory using malloc
 * @b: size of allocated memory in bytes.
 * Return:  a pointer to the allocated memory
 *  if Failed: function should cause normal process
 * termination with a status value of 98
*/
void *malloc_checked(unsigned int b)
{
int *arr = malloc(b);

if (arr == NULL)
exit(98);
return (arr);
}
