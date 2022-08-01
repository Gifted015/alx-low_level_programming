#include "main.h"
/**
 *main - prints its name, followed by a new line
 *@argc: number of argument
 *@argv: argument
 *Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
__attribute__((unused)) int i;
for (i = 0; i < argc; i++)
_puts(argv[i]);
return (0);
}
