#include <stdio.h>
#include "main.h"
/**
 *_abs - computes the absolute value of an intege
 *@n: character to be checked
 *Return: a
 */
int _abs(int n)
{
int a;
if (n < 0)
{
a = -1 * n;
}
else
{
a = n;
}
return (a);
}
