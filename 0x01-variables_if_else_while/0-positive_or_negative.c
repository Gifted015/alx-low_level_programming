#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Print whether the number n is positive or negative.
* Description: This program will assign a random number to the variable n
* Return: A string indicating whether n is positive or negative
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}
