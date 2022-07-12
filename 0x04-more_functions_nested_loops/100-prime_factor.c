#include "main.h"

/**
 *main - prints the largest prime factor of the number 612852475143
 *Return: 0
 */

int main(void)
{
long int x;
long int r;
long int s;
long int y;
long int k;
for (x = 2; x <= 612852475143; x++)
{
if (612852475143 % x == 0)
{
r = (x / 2);
y = 0;
for (s = 2; s < (r + 1); s++)
{
if (x % s == 0)
{
y = 1;
}
}
if (y == 0)
{
k = x;
}
}
}
printf("%ld\n", k);
return (0);
}
