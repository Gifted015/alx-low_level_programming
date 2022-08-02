#include "main.h"

/**
 *main - prints the minimum number of coins
 *to make change for an amount of money
 *@argc: number of argument
 *@argv: argument
 *Return: 0
 */

int main(__attribute__((unused))int argc,  char *argv[])
{
int i, j, v, s = 0;
long int a = 0;
int cent[5] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
for (j = 0; argv[1][j] != '\0'; j++)
{
if (argv[1][j] < 48 || argv[1][j] > 57)
s++;
}
v = _atoi(argv[1]);
if (v < 0)
a = 0;
else
{
for (i = 0; i < 5; i++)
{
if (v >= cent[i])
{
a++;
v = v - cent[i];
i--;
}
}
}
if (s == 0 && a != 0)
printf("%ld\n", a);
else
printf("%ld\n", a);
}
return (0);
}
