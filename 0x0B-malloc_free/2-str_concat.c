#include "main.h"

/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: NULL on failure and
 *pointer to the concatenated stings on success
 */

char *str_concat(char *s1, char *s2)
{
unsigned int i, j;
char *A;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
{
}
for (j = 0; s2[j] != '\0'; j++)
{
}
A = malloc(sizeof(char) * (i + j + 1));
if (A != NULL)
{
for (i = 0; s1[i] != '\0'; i++)
{
A[i] = s1[i];
}
for (j = 0;  s2[j] != '\0'; j++)
{
A[i] = s2[j];
i++;
}
return (A);
}
else
{
return (NULL);
}
}
