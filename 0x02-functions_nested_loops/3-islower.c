#include <stdio.h>
#include "main.h"
/**
 *_islower - checks for lowercase character.
 *Description: Returns 1 if c is lowercase, returns 0 otherwise
 *@c - character to be checked
 *Return: e
 */

int _islower(int c)
{
int e;
if (c >= 97 && c <= 122)
{
e = 49;
}
else
{
e = 48;
} 
return (e);
}
