#include "main.h"
/**
 *main - prints the sum of the even Fibonacci numbers
 *Description:  starting with 1 and 2, and less than 4,000,000
*Return: 0
*/

int main(void)
{
long int i;
long int x;
long int r = 1;
long int a = 2;
for (x = 0; x <= 100; x++)
{
if (a % 2 == 0 && a > 0 && a <= 4000000)
{
printf("%li ", a);
}
i = r + a;
r = a;
a = i;
}
printf("\n");
return (0);
}
