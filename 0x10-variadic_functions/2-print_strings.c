#include "variadic_functions.h"

/**
 *print_strings - prints strings, followed by a new line
 *@separator: the string to be printed between numbers
 *@n: the number of integers passed to the function
 *Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x;
char *str;
va_list st;

va_start(st, n);

for (x = 0; x < n; x++)
{
str = va_arg(st, char *);

if (str == NULL)
printf("(nil)");

else
printf("%s", str);

if (separator != NULL && x != (n - 1))
printf("%s", separator);
}

va_end(st);

printf("\n");
}
