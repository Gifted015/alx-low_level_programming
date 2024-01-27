#include "main.h"

/**
 *_isupper - checks for uppercase character
 *@c: character to be checked
 *Return: returns 1 if c is upper and 0 if otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
