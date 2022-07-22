#include "main.h"
#include <string.h>
/**
 *print_number - prints an integer
 *@n: integer
 */

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n < 100000 && n > 10000)
{
_putchar (((n % 100000) / 10000) + 48);
_putchar (((n % 10000) / 1000) + 48);
_putchar (((n % 1000) / 100) + 48);
_putchar (((n % 100) / 10) + 48);
_putchar((n % 10) + 48);
}
if (n < 10000 && n > 1000)
{
_putchar (((n % 10000) / 1000) + 48);
_putchar (((n % 1000) / 100) + 48);
_putchar (((n % 100) / 10) + 48);
_putchar((n % 10) + 48);
}
if (n < 1000 && n > 100)
{
_putchar (((n % 1000) / 100) + 48);
_putchar (((n % 100) / 10) + 48);
_putchar((n % 10) + 48);
}
if (n < 100 && n > 10)
{
_putchar (((n % 100) / 10) + 48);
_putchar((n % 10) + 48);
}
if (n < 10)
_putchar((n % 10) + 48);
}
