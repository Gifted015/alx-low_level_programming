#include "main.h"
#include "2-strlen.c"
/**
 *puts_half - print the second half(n/2 for even) of the string
 *Description: where n = (length_of_the_string - 1) / 2 for n is odd
 *@str: string passed
 */

void puts_half(char *str)
{
long int a;
int q = _strlen(str);
for (a = (q / 2) ; a <= q; a++)
{

if (q % 2 != 0)
{
if (str[a + 1] == '\0')
{
break;
}
_putchar(str[a + 1]);
}

else if (q % 2 == 0)
{
if (str[a] == '\0')
{
break;
}
_putchar(str[a]);
}
}
_putchar('\n');
}
