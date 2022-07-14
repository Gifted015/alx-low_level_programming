#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: string passed
 *Return: the length of thr string
 */

int _strlen(char *s)
{
char a;
int r = 0;
for (a = 0; a <= 100; a++)
{
if (*s == '\n' || *s == '%')
break;
r++;
s++;
}
return (r - 1);
}
