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

cute_dog = malloc(sizeof(dog_t));

if (cute_dog == NULL)
return (NULL);

if (name != NULL && owner != NULL)
{

cute_dog->name = malloc((len_name + 1)  * sizeof(char));

if (cute_dog->name == NULL)
{

return (NULL);
}

cute_dog->owner = malloc((len_owner  + 1) * sizeof(char));
if (cute_dog->owner == NULL)
{
return (NULL);
}

cute_dog->name = strdup(name);
cute_dog->owner = strdup(owner);
cute_dog->age = age;
}
return (cute_dog);
}
