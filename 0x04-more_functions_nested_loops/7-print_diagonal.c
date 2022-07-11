#include "main.h"

/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
int x;
int y;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (y = 1; y <= n; y++)
{
for (x = 1; x <= n; x++)
{
while (x < y)
{
_putchar(' ');
x++;
}
if (x == y)
{
_putchar('\\');
}
}
_putchar('\n');
}
}
}
