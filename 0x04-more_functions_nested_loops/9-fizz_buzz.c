#include <stdio.h>

/**
 *main - prints the numbers from 1 to 100
 *Description: for multiples of 3 print Fizz and Buzz for the multiples of 5
 *More description: numbers which are multiples of both 3 & 5, print FizzBuzz
 *Return: 0
 */

int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if (x % 3 == 0 && x % 5 == 0)
{
printf("FizzBuzz ");
}
else if (x % 3 == 0)
{
printf("Fizz ");
}
else if (x % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", x);
}
}
printf("\n");
return (0);
}
