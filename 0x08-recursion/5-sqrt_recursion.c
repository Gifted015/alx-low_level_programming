#include "main.h"

/**
 *_sqrt - gets the natrual square root of a number
 *@n: number
 *@i: square root
 *Return: i
 */

int _sqrt(int n, int i)
{
if ((i * i) == n)
return (i);

else if (i == n)
return (-1);

return (_sqrt(n, (i + 1)));
}


/**
 *_sqrt_recursion - returns the natrual square root of a number
 *@n: number
 *Return: n
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

else
{
int i = 0;
n = _sqrt(n, i);
return (n);
}
}
