#include "main.h"
#include "2-strlen.c"
/**
 *puts2 - prints every other character of a string starting with the 1st  character
 *@str: string passed
 */

void puts2(char *str)
{
long int a;
int q = _strlen(str);
for (a = 0; a < q; a++)
{
if (*str != '\0')
{
_putchar(*str);
str = str + 2;
}
else
{
break;
}
}
_putchar('\n');
}
