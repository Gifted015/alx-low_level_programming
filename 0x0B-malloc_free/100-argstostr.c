#include "main.h"

/**
 *argstostr - concatenates all the arguments
 *@ac: argument count
 *@av: arguments
 *Return: pointer to a new string if successful or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
int i, j, k = 0;
char *n;

if (ac == 0 || av == NULL)
{
return (NULL);
}

else
{
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
k++;
}
}
n = malloc(sizeof(char) * (k + ac + 1));
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
n[k] = av[i][j];
k++;
}
n[k] = '\n';
k++;
}
return (n);
}
}
