#include "main.h"

/**
 *_isupper - checks for a digit
 *@c: character to be checked
 *Return: returns 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
