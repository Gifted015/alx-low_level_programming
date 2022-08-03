#include "main.h"

/**
 *strtow - splits a string into words
 *@str: string
 *Return: pointer to a an array of strings(words) if successful
 *or NULL if it fails
 */

char **strtow(char *str)
{
int i, j, k = 0;
char **n;
if (str == NULL || str == "")
{
return (NULL);
}

else
{
for (i = 0; str[i] != '\0'; i++)
{
j = i;
if (str[i] != ' ' && i == 1)
{

}
else if (str[i] != ' ' && str[i - 1] == ' ' && i != 1)
{

}
}
return (n);
}
