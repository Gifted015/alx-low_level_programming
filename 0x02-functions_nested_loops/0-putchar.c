#include <stdio.h>

/**
*main - prints _putchar
*Return: 0
*/

int main ()
{
char *c = "_putchar";
while (*c != '\0')
{
putchar (*c);
c++;
}
putchar ('\n');
return 0;
}
