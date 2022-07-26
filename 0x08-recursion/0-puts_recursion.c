#include "main.h"

/**
 *_puts_recursion - prints a string
 *@s: string
 */

void _puts_recursion(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
{
_putchar(s[a]);
}
_putchar('\n');
}
