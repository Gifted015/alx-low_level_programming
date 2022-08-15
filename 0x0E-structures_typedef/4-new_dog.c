#include "dog.h"

/**
 *new_dog - creates a new dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
struct dog d;
dog_t *r;

if (name == NULL)
return (NULL);

if (age == '\0')
return (NULL);

if (owner == NULL)
return (NULL);

else
{
d.name = name;
d.age = age;
d.owner = owner;
r = &d;
}
return (r);
}
