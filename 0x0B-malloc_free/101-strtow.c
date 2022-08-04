#include "main.h"

/**
 *strtow - splits a string into words
 *@str: string
 *Return: pointer to a an array of strings(words) if successful
 *or NULL if it fails
 */

char **strtow(char *str)
{
int i, j, k, r = 1, s = 0;
char **n;
if (str == NULL)
return (NULL);
else
{
n = malloc(sizeof(char *) * r);
n[r - 1] = malloc(sizeof(char) * s);
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && i == 0)
{
for (j = i; str[j] != ' '; j++)
{
n[r - 1][s] = str[j];
n[r - 1] = realloc(n[r - 1], (sizeof(char) * (s + 1)));
s++;
}
n = realloc(n, (sizeof(char *) * (r + 1)));
r++;
i = j;
}
else if (str[i] != ' ' && i != 0)
{
s = 0;
n[r - 1] = malloc(sizeof(char) * s);
for (k = i; str[k] != ' '; k++)
{
n[r - 1][s] = str[k];
n[r - 1] = realloc(n[r - 1], (sizeof(char) * (s + 1)));
s++;
}
n = realloc(n, (sizeof(char *) * (r + 1)));
r++;
i = k;
}
}
return (n);
}
}
