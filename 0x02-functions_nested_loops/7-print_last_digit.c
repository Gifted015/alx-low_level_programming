#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@n: character to be checked
 *Return: a
 */
int print_last_digit(int n)
{
int a;
if (n < 0)
{
n = -1 * n;
}
a = (n % 10);
_putchar(a + 48);
return (a);
}
