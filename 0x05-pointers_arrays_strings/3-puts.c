#include "main.h"
#include "2-strlen.c"
/**
 *_puts - prints a string, followed by a new line, to stdout
 *@str: string passed
 */

void _puts(char *str)
{
long int a;
int q = _strlen(str);
for (a = 1; a <= q - 4; a++)
{
if (*str == '\n')
break;
_putchar(*str);
str++;
}
_putchar('\n');
}
