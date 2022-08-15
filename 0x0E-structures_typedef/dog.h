#ifndef NULL
#define NULL ((void *)0)
#endif

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

/**
 *dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
