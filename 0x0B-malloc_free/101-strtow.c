#include "main.h"

/**
 *strtow - splits a string into words
 *@str: string
 *Return: pointer to a an array of strings(words) if successful
 *or NULL if it fails
 */

char **strtow(char *str)
{
int i, j, k, r = 1, s = 1, p = 0;
char **n;

if (str == NULL)
return (NULL);

else
{
n = malloc(sizeof(char *) * r);
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{
p++;
n[r - 1] = malloc(sizeof(char) * s);
j = 0;
for (k = i; str[k] != ' '; k++)
{
n[r - 1][j] = str[k];
n[r - 1] = realloc(n[r - 1], (sizeof(char) * (s + 1)));
s++;
j++;
}
n = realloc(n, (sizeof(char *) * (r + 1)));
i = k;
r++;
}
}
if (p != 0)
return (n);
else
return (NULL);
}
}
