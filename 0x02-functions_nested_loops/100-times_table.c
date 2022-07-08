#include <stdio.h>
#include "main.h"
/**
 *print_times_table - prints the n times table, starting with 0
 *Description: If n > 15 or < 0 the function would not print anything
 *@n: the ending point
 *Return: 0
 */

void print_times_table(int n)
{
int x;
int y;

if (n > 0 && n < 15)
{
for (x = 0; x <= n; x++)
{
for (y = 0; y <= n; y++)
{

int a = x * y;

if (y == 0)
{
_putchar (a + 48);
}
if (a <= 9 && y != 0)
{
_putchar (',');
_putchar (' ');
_putchar (' ');
_putchar (' ');
_putchar (a + 48);
}
if (a >= 10 && a < 100)
{
_putchar (',');
_putchar (' ');
_putchar (' ');
_putchar ((a / 10) + 48);
_putchar ((a % 10) + 48);
}
if (a >= 100)
{
_putchar (',');
_putchar (' ');
_putchar ((a / 100) + 48);
_putchar ((a % 100) / 10 + 48);
_putchar ((a % 10) + 48);
}
}

_putchar ('\n');
}
}
}
