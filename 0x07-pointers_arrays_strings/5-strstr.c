#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: string
 *@needle: substring
 *Return: s if byte is found and NULL if not
 */

char *_strstr(char *haystack, char *needle)
{
char *c, *d;
while (*haystack != '\0')
{
c = haystack;
d = needle;
while (*haystack != '\0' && *d != '\0' && *haystack == *d)
{
haystack++;
d++;
}
if (*d == '\0')
return (c);
haystack = c + 1;
}


return ('\0');
}
