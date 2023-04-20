#ifndef Main
#define Main
/**
 * struct dog - struct that define name & owner & age.
 * @name: define the name.
 * @owner: the owner
 * @age: the age.
*/
struct dog
{
char *name;
char *owner;
float age;
};
#endif

void init_dog(struct dog *d, char *name, float age, char *owner);