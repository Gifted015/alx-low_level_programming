#include "main.h"

/**
 *_strbrk - searches a string for any of a set of bytes
 *@s: string to be searched
 *@accept: string of bytes to be found
 *Return: s if byte is found and NULL if not
 */

char *_strpbrk(char *s, char *accept)
{
int a, b;
for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (s[a] == accept[b])
break;
}
if (s[a] == accept[b])
{
s = s + a;
break;
}
}
return (s);
}
