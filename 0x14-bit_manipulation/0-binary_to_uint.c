#include "main.h"


/**
 *_pow - calculates a raise to power b (a^b)
 *@a: the base
 *@b: power
 *Return: the result of a^b
 */

int _pow(int a, int b)
{
int res = 1, x;
for (x = 1; x <= b; x++)
{
res = res *a;
}

return (res);
}


/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: points to a string of 0 and 1 char
 *Return: the converted number, or 0 if
 *there is one or more chars in the string b that is not 0 or 1
 *b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int x, temp, len = strlen(b), res = 0;

if (b == NULL)
return (0);
for (x = 0; x < strlen(b); x++)
{
if (b[x] == '1' || b[x] == '0')
{
temp = b[x] - 48;
res = res + (temp *_pow(2, len - 1));
len--;
}
else
return (0);
}

return (res);
}
