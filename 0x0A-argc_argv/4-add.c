#include "main.h"

/**
 *main - adds positive numbers
 *@argc: number of argument
 *@argv: argument
 *Return: 0
 */

int main(__attribute__((unused))int argc,  char *argv[])
{
int i, j, s = 0;
long int a = 0;

if (argc < 3)
{
printf("%ld\n", a);
}

else
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < 48 || argv[i][j] > 57)
s++;
}
if (s == 0)
{
a = _atoi(argv[i]) + a;
}
}
if (s == 0)
printf("%ld\n", a);
else
printf("Error\n");
}


return (0);
}
