#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s: string
 *@accept: substring
 *Return: the number of bytes in the intial segments of s which consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, m = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
m++;
break;
}
}
if (accept[j] != s[i])
break;
}
return (m);
}
