#include <stdio.h>
#include "main.h"
/**
 *jack_bauer - prints every minute of the day of
 *Return: 0
 */

void jack_bauer(void)
{
int x;
int y;
for (x = 0; x <= 23; x++)
{
for (y = 0; y <= 60; y++)
{
if (x <= 23 && y != 60)
{
putchar ((x / 10) + 48);
putchar ((x % 10) + 48);
putchar (':');
putchar ((y / 10) + 48);
putchar ((y % 10) + 48);
putchar ('\n');
}
}
}
}
