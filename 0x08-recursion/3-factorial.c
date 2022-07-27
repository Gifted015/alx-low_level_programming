#include "main.h"

/**
 *fact - gets the factorial of a given number
 *@n: number
 *Return: n (factorial)
 */

int fact(int n)
{
if (n == 0)
return (1);

return (n * fact(n - 1));
}


/**
 *factorial - returns the factorial of a given number
 *@n: number
 *Return: n (factorial)
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else
{
n = fact(n);
return (n);
}
}
