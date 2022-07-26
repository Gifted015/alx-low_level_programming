#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: string
 *@needle: substring
 *Return: s if byte is found and NULL if not
 */

char *_strstr(char *haystack, char *needle)
{
int a;

for (a = 0; haystack[a] != '\0'; a++)
{
if (haystack[a] == needle[0])
return (haystack + a);
}
return ('\0');
}
