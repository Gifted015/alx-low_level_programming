#ifndef Dog
#define Dog

/**
 *struct dog - deines new types for dog names
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 */

struct dog
{
char *name;
float age;
char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
