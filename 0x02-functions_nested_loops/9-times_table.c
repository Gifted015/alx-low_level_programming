#include <stdio.h>
#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0
 *Return: 0
 */

void times_table(void)
{
int x;
int y;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
int a = (x * y);
int b = (a / 10);

if (a > 9)
{
_putchar (b + 48);
}

_putchar ((a % 10) + 48);
if (y != 9)
{
_putchar (',');
_putchar (' ');
}
}

_putchar ('\n');
}
}
