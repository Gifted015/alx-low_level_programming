#include <stdio.h>
#include "main.h"
/**
 *_islower - checks for lowercase character.
 *Description: Returns 1 if c is lowercase, returns 0 otherwise
 *@c: character to be checked
 *Return: e
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
