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
int i = 0, j, k = 0;
for (j = 0; s2[k] != '\0'; j++)
{
i = i + (s1[j] - s2[k]);
k++;
if (i != 0)
break;
}
return (i);
}
