#include "variadic_functions.h"

/**
 *print_numbers - prints numbers, followed by a new line
 *@separator: the string to be printed between numbers
 *@n: the number of integers passed to the function
 *Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;

va_list nu;

va_start(nu, n);

for (x = 0; x < n; x++)
{
printf("%d", va_arg(nu, unsigned int));

if (separator != NULL && x != (n - 1))
printf("%s", separator);
}

va_end(nu);

printf("\n");
}
