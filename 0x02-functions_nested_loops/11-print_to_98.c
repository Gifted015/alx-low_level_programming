#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: starting point
 */

void print_to_98(int n)
{

int x;

if (n < 98)
{
for (x = n; x < 99; x++)
{
if (x < 10)
{
if (x < 0)
{
if ((-x) >= 10)
{
x = -x;
_putchar ('-');
_putchar ((x / 10) + 48);
_putchar ((x % 10) + 48);
_putchar (',');
_putchar (' ');
}
else
{
_putchar ('-');
_putchar (-x + 48);
_putchar (',');
_putchar (' ');
}
}
else
{
_putchar (x + 48);
_putchar (',');
_putchar (' ');
}
}
else if (x == 98)
{
_putchar ('9');
_putchar ('8');
}
else
{
_putchar ((x / 10) + 48);
_putchar ((x % 10) + 48);
_putchar (',');
_putchar (' ');
}
}
}

if (n == 98)
{
_putchar ('9');
_putchar ('8');
}

if (n > 98)
{
for (x = n; x > 97; x--)
{
if (x >= 100)
{
_putchar ((x / 100) + 48);
_putchar ((x % 10) / 10 + 48);
_putchar ((x % 10) + 48);
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
_putchar ((x / 10) + 48);
_putchar ((x % 10) + 48);
_putchar (',');
_putchar (' ');
}
}
}

_putchar ('\n');
}
