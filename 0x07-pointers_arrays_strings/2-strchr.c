#include "main.h"

/**
 *_strchr - locates a character in a string
 *@s: string
 *@c: character
 *Return: c if found and 0 if not
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
break;
}
s++;
}
if (*s == '\0')
return (0);
else
return (s);
}
