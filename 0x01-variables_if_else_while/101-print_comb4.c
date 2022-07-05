#include <stdio.h>
/**
* main - Print the alphabets
* Description - Prints the alphabets in lower case
* Return: The alphabets
*/
int main(void)
{
int x;
int y;
int z;
for (x = '0'; x < '9'; x++)
{
for (y = x + 1; y <= '9'; y++)
{
for (z = y + 1; z <= '9'; z++)
{
putchar(x);
putchar(y);
putchar(z);
if (x == '7' && y == '8' && z == '9')
{
break;
}
else if (x < '9' && y <= '9')
{
putchar(',');
putchar(' ');
}
else
{
continue;
}
}
}
}
putchar('\n');
return (0);
}
