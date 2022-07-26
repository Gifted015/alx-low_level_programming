#include "main.h"

/**
 *_rev - reverse a string
 *@s: string
 *Return: string
 */

char *_rev(char *s)
{
if (*s == '\0')
{
return (s - 1);
}
else
return (_rev(s + 1));
}


/**
 *_puts - return a string
 *@s: string
 *Return: string
 */

char _puts(char *s)
{
if (*s == '\0')
{
return (0);
}
else
_putchar(*s);
return (_puts(s - 1));
}


/**
 *_print_rev_recursion - prints a string in reverse
 *@s: string
 */

void _print_rev_recursion(char *s)
{
s = _rev(s);
_puts(s);
}
