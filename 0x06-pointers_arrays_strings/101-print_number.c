#include "main.h"
#include <string.h>

/**
 *n2 - helps in printing an integer
 *@n: integer
 */

void n2(int n)
{
if (n >= 1000000000)
{
_putchar (((n % 10000000000) / 1000000000) + 48);
_putchar (((n % 1000000000) / 100000000) + 48);
_putchar (((n % 100000000) / 10000000) + 48);
_putchar (((n % 10000000) / 1000000) + 48);
_putchar (((n % 1000000) / 100000) + 48);
_putchar (((n % 100000) / 10000) + 48);
_putchar (((n % 10000) / 1000) + 48);
_putchar (((n % 1000) / 100) + 48);
_putchar (((n % 100) / 10) + 48);
_putchar((n % 10) + 48);
}
if (n < 1000000000 && n >= 100000000)
{
_putchar (((n % 1000000000) / 100000000) + 48);
_putchar (((n % 100000000) / 10000000) + 48);
_putchar (((n % 10000000) / 1000000) + 48);
_putchar (((n % 1000000) / 100000) + 48);
_putchar (((n % 100000) / 10000) + 48);
_putchar (((n % 10000) / 1000) + 48);
_putchar (((n % 1000) / 100) + 48);
_putchar (((n % 100) / 10) + 48);
_putchar((n % 10) + 48);
}
}

/**
 *n1 - helps in printing an integer
 *@n: integer
 */

void n1(int n)
{
if (n < 100000000 && n >= 10000000)
{
_putchar (((n % 100000000) / 10000000) + 48);
_putchar (((n % 10000000) / 1000000) + 48);
_putchar (((n % 1000000) / 100000) + 48);
_putchar (((n % 100000) / 10000) + 48);
_putchar (((n % 10000) / 1000) + 48);
_putchar (((n % 1000) / 100) + 48);
_putchar (((n % 100) / 10) + 48);
_putchar((n % 10) + 48);
}
if (n < 10000000 && n >= 1000000)
{
_putchar (((n % 10000000) / 1000000) + 48);
_putchar (((n % 1000000) / 100000) + 48);
_putchar (((n % 100000) / 10000) + 48);
_putchar (((n % 10000) / 1000) + 48);
_putchar (((n % 1000) / 100) + 48);
_putchar (((n % 100) / 10) + 48);
_putchar((n % 10) + 48);
}
if (n < 1000000 && n >= 100000)
{
_putchar (((n % 1000000) / 100000) + 48);
_putchar (((n % 100000) / 10000) + 48);
_putchar (((n % 10000) / 1000) + 48);
_putchar (((n % 1000) / 100) + 48);
_putchar (((n % 100) / 10) + 48);
_putchar((n % 10) + 48);
}
}


/**
 *n3 - helps in printing an integer
 *@n: integer
 */

void n3(int n)
{
if (n < 100000 && n >= 10000)
{
_putchar (((n % 100000) / 10000) + 48);
_putchar (((n % 10000) / 1000) + 48);
_putchar (((n % 1000) / 100) + 48);
_putchar (((n % 100) / 10) + 48);
_putchar((n % 10) + 48);
}
}

/**
 *print_number - prints an integer
 *@n: integer
 */

void print_number(int n)
{
if (n < 0)
{
_putchar ('-');
n = -n;
}
if (n >= 100000000 || n == -2147483648)
n2(n);
if (n < 100000000 && n >= 100000)
n1(n);
if (n < 100000 && n >= 10000)
n3(n);
if (n < 10000 && n >= 1000)
{
_putchar (((n % 10000) / 1000) + 48);
_putchar (((n % 1000) / 100) + 48);
_putchar (((n % 100) / 10) + 48);
_putchar((n % 10) + 48);
}
if (n < 1000 && n >= 100)
{
_putchar (((n % 1000) / 100) + 48);
_putchar (((n % 100) / 10) + 48);
_putchar((n % 10) + 48);
}
if (n < 100 && n >= 10)
{
_putchar (((n % 100) / 10) + 48);
_putchar((n % 10) + 48);
}
if (n < 10 && n >= 0)
_putchar((n % 10) + 48);
if (n < 0)
print_number(n);
}
