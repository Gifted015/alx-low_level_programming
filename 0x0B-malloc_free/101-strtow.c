#include "main.h"

/**
 *checkw - checks how many words a string contain
 *@str: string
 *Return: p if successful or 0 if it fails
 */

int checkw(char *str)
{
int i, k, p = 0;

if (str == NULL)
return (0);

else
{
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{
p = p + 1;
for (k = i; str[k] != ' '; k++)
{
}
i = k;
}
}

if (p != 0)
return (p);

else
return (0);
}
}

/**
 *checkc - checks how many character a word contain
 *@str: string
 *@i: position of first word in string
 *Return: j if successful or NULL if it fails
 */

int checkc(char *str, int i)
{
int j = 0, k;

for (k = i; str[k] != ' '; k++)
{
j++;
}
return (j);
}


/**
 *strtow - splits a string into words
 *@str: string
 *Return: pointer to a an array of strings(words) if successful
 *or NULL if it fails
 */

char **strtow(char *str)
{
int a, c, b = 0, i, j = 0, k;
char **n;

c = checkw(str);

if (c == 0)
return (NULL);

else
{
n = (char **)malloc(sizeof(char *) * (c + 1));
for (i = 0; str[i] != '\0'; i++)
{

if (str[i] != ' ')
{
a = checkc(str, i);
n[j] = (char *)malloc(sizeof(char) * (a + 1));
b = 0;
for (k = i; str[k] != ' '; k++)
{
n[j][b] = str[k];
b++;
}
i = k;
j++;
}
}
n[i - 1] = NULL;
return (n);
}
}
