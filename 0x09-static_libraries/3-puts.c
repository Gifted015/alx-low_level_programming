#include "main.h"
/**
 *_puts - prints a string, followed by a new line, to stdout
 *@str: string passed
 */

void _puts(char *str)
{
long int a;
int q = _strlen(str);
for (a = 1; a <= q; a++)
{
if (*str != '\0')
{
_putchar(*str);
str = str + 1;
}
else
{
break;
}
}
_putchar('\n');
}
