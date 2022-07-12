#include <stdio.h>
#include "main.h"
/**
 *check - prints for a
 *@a: input
 *Return: 0
 */
void check(int a)
{
if (a >= 1000000000)
_putchar ((a / 1000000000) + 48);
if (a >= 100000000)
_putchar ((a % 1000000000) / 100000000 + 48);
if (a >= 10000000)
_putchar ((a % 100000000) / 10000000 + 48);
if (a >= 1000000)
_putchar ((a % 10000000) / 1000000 + 48);
if (a >= 100000)
_putchar ((a % 1000000) / 100000 + 48);
if (a >= 10000)
_putchar ((a % 100000) / 10000 + 48);
if (a >= 1000)
_putchar ((a % 10000) / 1000 + 48);
if (a >= 100)
_putchar ((a % 1000) / 100 + 48);
if (a >= 10)
_putchar ((a % 100) / 10 + 48);
if (a >= 0)
_putchar ((a % 10) + 48);
}

/**
 *print_number - prints an integer
 *@n: integer to be printed
 *Return: 0
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
check(n);
}
