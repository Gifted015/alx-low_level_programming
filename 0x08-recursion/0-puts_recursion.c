#include "main.h"

/**
 *_puts - return a string
 *@s: string
 *Return: string
 */

char _puts(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return (0);
}
else
_putchar(*s);
return (_puts(s + 1));
}


/**
 *_puts_recursion - prints a string
 *@s: string
 */

void _puts_recursion(char *s)
{
_puts(s);
}
