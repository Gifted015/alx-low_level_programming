#include <stdio.h>
/**
* main - Print the alphabets
* Description - Prints the alphabets in lower case
* Return: The alphabets
*/
int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
if (x < '9')
{
putchar(',');
putchar(' ');
}
else
{
continue;
}
}
putchar('\n');
return (0);
}
