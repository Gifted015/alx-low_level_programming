#include "main.h"

/**
 *_prime - checks the divisibility of an integer
 *@n: integer
 *@j: divisor (n > j > 1)
 *@i: numbers of j(s) that can divide it
 *Return: i
 */

int _prime(int n, int j, int i)
{
if (j <= 1)
return (i);

else if (n % j == 0)
i = i + 1;

return (_prime(n, (j - 1), i));
}


/**
 *is_prime_number - checks if an integer is a prime number or not
 *@n: integer
 *Return: 1 if n is a prime number otherwise returns 0
 */

int is_prime_number(int n)
{
int i = 0, j = (n - 1);

if (n <= 1)
return (0);

n = _prime(n, j, i);

if (n == 0)
return (1);

else
return (0);
}
