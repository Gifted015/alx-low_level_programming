#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: string passed
 *Return: the length of thr string
 */

int _strlen(char *s)
{
long int a;
int r = 0;
for (a = 0; a <= 10000; a++)
{
if (*s == '\n' || *s == '%')
break;
r++;
s++;
}
return (r - 1);
}
