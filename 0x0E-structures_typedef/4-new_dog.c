#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - creates a new dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int x, namelen, ownerlen;
dog_t *d;

if (name == NULL || age == '\0' || owner == NULL)
return (NULL);

else
{
d = malloc(sizeof(dog_t));

for (x = 0; name[x] != '\0'; x++)
namelen++;
d->name = malloc(sizeof(char) * (namelen + 1));

for (x = 0; owner[x] != '\0'; x++)
ownerlen++;
d->owner = malloc(sizeof(char) * (ownerlen + 1));

if (d->name == NULL || d->owner == NULL)
{
free(d->name);
free(d->owner);
free(d);
return (NULL);
}

else
{
for (x = 0; name[x] != '\0'; x++)
d->name[x] = name[x];

d->age = age;

for (x = 0; owner[x] != '\0'; x++)
d->owner[x] = owner[x];
}
}
return (d);
}
