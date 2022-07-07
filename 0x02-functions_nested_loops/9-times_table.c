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
_putchar (a + 48);
}
else if (a >= 10)
{
_putchar (',');
_putchar (' ');
_putchar ((a / 10) + 48);
_putchar ((a % 10) + 48);
}
}

_putchar ('\n');
}
}
