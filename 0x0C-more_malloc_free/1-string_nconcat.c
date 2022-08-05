#include "main.h"

/**
 *string_nconcat - concatenates two strings
 *Description: if malloc fails, the function should cause
 *normal process termination with a status value of 98
 *@s1: first string
 *@s2: second string
 *@n: number of bytes of s2 to be concatenated to s1
 *Return: pointer to the space in memory containing the concatenated string
 *or NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
char *new;

for (i = 0; s1[i] != '\0'; i++)
{
}
new = malloc(sizeof(char) * (i + n + 1));

if (new != NULL)
{
for (i = 0; s1[i] != '\0'; i++)
{
new[i] = s1[i];
}

for (j = 0; j < n; j++)
{
new[i] = s2[j];
i++;
}
new[i] = '\0';

return (new);
}

else
return (NULL);
}
