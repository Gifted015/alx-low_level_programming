
#include "main.h"
#include "2-strlen.c"
/**
 *print_rev - prints a string, in reverse, followed by a new line
 *@s: string passed
 */

void print_rev(char *s)
{
int r;
char * a;
char *i;
char *p;
int q = _strlen(s);
p = s;
for (r = 1; r <= q; r++)
{
if (*s != '\0')
{
s++;
}
else
{
break;
}
}
i = s;
for (a = p; a <= s; a++)
{
if (*i == '\0')
i--;
else
{
_putchar(*i);
i--;
}
}
_putchar('\n');
}
