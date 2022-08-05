#include "main.h"

/**
 *malloc_checked - allocates memory using malloc
 *Description: if malloc fails, the function should cause 
 *normal process termination with a status value of 98
 *@b: number of bytes to be allocated
 *Return: nothing
 */

void *malloc_checked(unsigned int b)
{
void *n;

n = malloc(b);

if (n == NULL)
exit (98);

else
return (n);
}
