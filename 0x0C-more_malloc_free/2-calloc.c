#include "main.h"

/**
 *_calloc - allocate memory for an array using malloc
 *@nmemb: number of elements
 *@size: number of bytes to be allocated for each elements
 *Return: pointer to allocated memory if successful
 *or NULL if function fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *n;

if (nmemb == 0 || size == 0)
return (NULL);

else
{
n = malloc(nmemb * size);

if (n == NULL)
return (NULL);

else
{
for (i = 0; i < (nmemb * size); i++)
{
n[i] = 0;
}
return (n);
}
}
}
