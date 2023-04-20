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
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
