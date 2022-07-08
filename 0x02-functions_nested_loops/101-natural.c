#include "main.h"
/**
*main - computes and prints the sum of all the multiples of 3 or 5 below 1024
*Return: 0
*/

int main(void)
{
int x;
int r = 0;
for (x = 0; x < 1024; x++)
{
if ((x % 3) == 0)
{
r = r + x;
}
else if ((x % 5) == 0)
{
r = r + x;
}
}
_putchar ((r / 100000) + 48);
_putchar ((r % 100000) / 10000 + 48);
_putchar ((r % 10000) / 1000 + 48);
_putchar ((r % 1000) / 100 + 48);
_putchar ((r % 100) / 10 + 48);
_putchar ((r % 10) + 48);
_putchar('\n');
return (0);
}
