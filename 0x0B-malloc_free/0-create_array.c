#include "main.h"

/**
 *create_array - creates an array of chars, and initializes it with a specific char
 *@size: size of array
 *@c: character to be initialized into array
 *Return: NULL if sixe = 0 else returns pointer to the array
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *A;

if (size == 0)
{
return (NULL);
}

else
{
A = malloc(sizeof(char) * size);
if (A != NULL)
{
for (i = 0; i < size; i++)
{
A[i] = c;
}
}

return (A);
}
}
