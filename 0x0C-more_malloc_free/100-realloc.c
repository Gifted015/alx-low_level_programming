#include "main.h"

/**
 *_realloc - reallocates a memory block using malloc and free
 *Description: The contents will be copied to the newly allocated space
 *in the range from the start of ptr up to the minimum of the old and new sizes
 *@ptr: pointer to memory previously allocated
 *@old_size: the size in bytesof the allocated space for ptr
 *@new_size: the new size in bytes of the new memory block
 *Return: pointer to the space in memory containing the concatenated string
 *or NULL if function fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *new;
if (new_size == old_size)
return (ptr);
else
{
if (ptr == NULL)
{
new = malloc(new_size);
return (new);
}

else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}

else
{
new = malloc(new_size);
if (new != NULL)
{
for (i = 0; i < old_size; i++)
new[i] = ((char *)ptr)[i];
free(ptr);
return (new);
}

else
{
free(new);
free(ptr);
return (NULL);
}
}
}
}
}
