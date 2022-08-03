#include "main.h"

/**
 *_strdup - copies a string to a space in memory
 *@str: string to be copied
 *Return: NULL if str = NULL or if insufficient memory was available
 *else returns pointer to the duplicated string
 */

char *_strdup(char *str)
{
unsigned int i;
char *A = "hi";

if (str == NULL)
{
return (NULL);
}

else
{

for (i = 0; str[i] != '\0'; i++)
{
}
A = malloc(sizeof(char) * i);

if (A != NULL)
{
for (i = 0; str[i] != '\0'; i++)
{
A[i] = str[i];
}
return (A);
}

else
{
return (NULL);
}
}
}
