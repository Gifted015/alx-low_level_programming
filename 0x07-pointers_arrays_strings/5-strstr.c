#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: string
 *@needle: substring
 *Return: s if byte is found and NULL if not
 */

char *_strstr(char *haystack, char *needle)
{
int a, b;
for (a = 0; haystack[a] != '\0'; a++)
{
for (b = 0; needle[b] != '\0'; b++)
{
if (haystack[a] == needle[b] && haystack[a + 1] == needle[b + 1])
return (haystack + a);
}
}
return ('\0');
}
