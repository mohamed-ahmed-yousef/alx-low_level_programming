#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - function that creates a new dog.
 * -------------
 * @name: dog name
 * @age: dog age.
 * @owner: dog owner.
 * --------------
 * Return: NULL if the function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *cute_dog;
int len_name = strlen(name);
int len_owner = strlen(owner);

if (name != NULL && owner != NULL)
{
cute_dog = malloc(sizeof(dog_t));

cute_dog->name = malloc(len_name * sizeof(char));
cute_dog->owner = malloc(len_owner * sizeof(char));

if (cute_dog->name == NULL)
{
free(cute_dog);
return (NULL);
}

if (cute_dog->owner == NULL)
{
free(cute_dog->name);
free(cute_dog);
return (NULL);
}

cute_dog->name = strcpy(cute_dog->name, name);
cute_dog->owner = strcpy(cute_dog->name, owner);
cute_dog->age = age;
}
return (cute_dog);
}
