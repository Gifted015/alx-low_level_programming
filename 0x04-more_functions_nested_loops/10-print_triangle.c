#include "main.h"

/**
 *print_triangle - prints a triangle
 *Description: Use the character # to print the triangle
 *@size: size of the triangle
 */

void print_triangle(int size)
{
int n = size;
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
for (x = n; x >= 1; x--)
{
while (x > y)
{
_putchar(' ');
x--;
}
if (x <= y)
{
_putchar('#');
}
}
_putchar('\n');
}
}
}
