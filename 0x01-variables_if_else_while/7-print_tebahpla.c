#include <stdio.h>
/**
* main - Print the alphabets
* Description - Prints the alphabets in lower case
* Return: The alphabets
*/
int main(void)
{
int x;
for (x = 'z'; x >= 'a'; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}
