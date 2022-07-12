#include <stdio.h>
#include "main.h"
/**
 *less_10 - prints for a < 10
 *@a: input
 *Return: 0
 */

void less_10(int a)
{
_putchar (a + 48);
}

/**
 *greater_10_not_100 - prints for a >= 10 but < 100
 *@a: input
 *Return: 0
 */
void greater_10_not_100(int a)
{
_putchar ((a / 10) + 48);
_putchar ((a % 10) + 48);
}

/**
 *greater_100_not_1000 - prints for a >= 100 but < 1000
 *@a: input
 *Return: 0
 */
void greater_100_not_1000(int a)
{
_putchar ((a / 100) + 48);
_putchar ((a % 100) / 10 + 48);
_putchar ((a % 10) + 48);
}


/**
 *greater_1000 - prints for a >= 1000
 *@a: input
 *Return: 0
 */
void greater_1000(int a)
{
_putchar ((a / 1000) + 48);
_putchar ((a % 1000) / 100 + 48);
_putchar ((a % 100) / 10 + 48);
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
if (n <= 9)
{
less_10(n);
}
else if (n >= 10 && n < 100)
{
greater_10_not_100(n);
}
else if (n >= 100 && n < 1000)
{
greater_100_not_1000(n);
}
else if (n >= 1000)
{
greater_1000(n);
}
}
