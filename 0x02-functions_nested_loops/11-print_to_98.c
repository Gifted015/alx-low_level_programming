#include <stdio.h>
#include "main.h"
#include "6-abs.c"
/**
 *greater - runs for > 98
 *@n: starting point
 */

void greater(int n)
{
int x;
for (x = n; x > 97; x--)
{
if (x >= 100)
{
_putchar ((_abs(x) / 100) + '0');
_putchar ((_abs(x) % 100) / 10 + '0');
_putchar ((_abs(x) % 10) + '0');
_putchar (',');
_putchar (' ');
}
else if (x == 98)
{
_putchar ('9');
_putchar ('8');
}
else
{
_putchar ((_abs(x) / 10) + '0');
_putchar ((_abs(x) % 10) + '0');
_putchar (',');
_putchar (' ');
}
}
}

/**
 *less - runs for < 98
 *@n: starting point
 */

void less(int n)
{
int x;
for (x = n; x < 99; x++)
{
if (x < 0)
{
_putchar ('-');
}
if (x < 10 && x > (-10))
{
_putchar (_abs(x) + '0');
_putchar (',');
_putchar (' ');
}
if (x == 98)
{
_putchar ('9');
_putchar ('8');
}
if ((x >= 10 && x < 98) || (x <= (-10) && x > (-100)))
{
_putchar ((_abs(x) / 10) + '0');
_putchar ((_abs(x) % 10) + '0');
_putchar (',');
_putchar (' ');
}
if (x <= (-100))
{
greater(n);
}
}
}

/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: starting point
 */

void print_to_98(int n)
{
if (n < 98)
{
less(n);
}

if (n == 98)
{
_putchar ('9');
_putchar ('8');
}

if (n > 98)
{
greater(n);
}

_putchar ('\n');
}
