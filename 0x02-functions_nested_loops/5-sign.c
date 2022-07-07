#include <stdio.h>
#include "main.h"
/**
 *print_sign - prints the sign of a numbe
 *Description: prints + if n is > zero, 0 if n is zero and - if n is <3 zero
 *@n: character to be checked
 *Return: 1 or 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
