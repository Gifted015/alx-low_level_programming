#include "main.h"
#include <string.h>
/**
 *_strcmp - compares two strings
 *@s1: first string to be compared
 *@s2: second string to be compared
 *Return: difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
int i, j, k, l = 0, m = 0;
for (j = 0; s1[j] != '\0'; j++)
{
l++;
}
for (k = 0; s2[k] != '\0'; k++)
{
m++;
}
i = l - m;
return (i);
}
