#include "main.h"
#include "2-strlen.c"
/**
 *print_rev - prints a string, in reverse, followed by a new line
 *@s: string passed
 */

void print_rev(char *s)
{

long int a;
char *i;
int q = _strlen(s);

for (a = 1; a <= q; a++)
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
for (a = 1; a <= q; a++)
{
if (*i == '\0')
_putchar(8);
else
_putchar(*i);
i--;

}
_putchar('\n');
}
