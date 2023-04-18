#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes
 * @d: A dog .
 * @name: name .
 * @age: age .
 * @owner: dog owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
