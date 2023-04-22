#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include <string.h>
/**
 * free_dog -  function that frees dogs.
 * -------------
 * @d: dog structure
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
