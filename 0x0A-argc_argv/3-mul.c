#include "main.h"

/**
 *main - multipies two numbers
 *@argc: number of argument
 *@argv: argument
 *Return: 0
 */

int main(__attribute__((unused))int argc,  char *argv[])
{
int i;
long int a;
char e[] = "Error";

if (argc == 1 || argc > 3)
{
for (i = 0; e[i] != '\0'; i++)
_putchar(e[i]);
_putchar('\n');
}

else
{
a = _atoi(argv[1]) * _atoi(argv[2]);
printf("%ld\n", a);
}

return (0);
}
