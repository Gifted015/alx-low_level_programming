#include "main.h"

/**
 *_pow - gets the value of x raised to the power of y
 *@x: base
 *@y: power
 *Return: x
 */

int _pow(int x, int y)
{
if (y == 0)
return (1);

return (x * _pow(x, (y - 1)));
}


/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: base
 *@y: power
 *Return: x
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else
{
x = _pow(x, y);
return (x);
}
}
