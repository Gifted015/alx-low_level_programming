#include <stdio.h>
#include "main.h"
/**
 *_isalpha - checks for alphabetic character.
 *Description: Returns 1 if c is letter, returns 0 otherwise
 *@c: character to be checked
 *Return: 1 or 0
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
