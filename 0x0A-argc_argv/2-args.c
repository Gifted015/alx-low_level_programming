#include "main.h"
/**
 *main - prints all arguments it receives
 *Description: Only print one argument per line
 *@argc: number of argument
 *@argv: argument
 *Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
int i;
int j = 0;
for (i = 0; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] == ' ')
_putchar('\n');
else
_putchar(argv[i][j]);
}
_putchar('\n');
}
return (0);
}
