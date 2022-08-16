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

d = malloc(sizeof(dog_t));
if (d == NULL)
{
free(d);
return (NULL);
}
else
{
for (x = 0; name[x] != '\0'; x++)
namelen++;

for (x = 0; owner[x] != '\0'; x++)
ownerlen++;

d->name = malloc(sizeof(d->name) * namelen);
if (d->name != NULL)
{
for (x = 0; name[x] != '\0'; x++)
d->name[x] = name[x];
}
else
{
free(d->name);
free(d);
return (NULL);
}

d->age = age;

d->owner = malloc(sizeof(d->owner) * ownerlen);
if (d->owner != NULL)
{
for (x = 0; owner[x] != '\0'; x++)
d->owner[x] = owner[x];
}
else
{
free(d->name);
free(d->owner);
free(d);
return (NULL);
}
return (d);
}
}
