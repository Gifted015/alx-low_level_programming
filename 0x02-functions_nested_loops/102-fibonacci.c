#include "main.h"
/**
 *main - prints the first 50 Fibonacci numbers
 *Description:  starting with 1 and 2, followed by a new line.
*Return: 0
*/

int main(void)
{
long int i;
long int x;
long int r = 1;
long int a = 2;
for (x = 0; x < 50; x++)
{
printf("%li", r);
i = r + a;
r = a;
a = i;
if (x < 49)
{
printf(", ");
}
}
printf("\n");
return (0);
}
