#include "variadic_functions.h"

/**
 *sum_them_all - calculates the sum of all its parameters
 *@n: number of parameters
 *Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int x, sum = 0;

if (n == 0)
return (0);

else
{
va_list pa;

va_start(pa, n);

for (x = 0; x < n; x++)
{
sum = sum + va_arg(pa, unsigned int);
}

va_end(pa);

return (sum);
}
}
