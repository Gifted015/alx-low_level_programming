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
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;

l = n % 10;
printf("Last digit of %i is ", n);

if (l > 5)
{
printf("%d and is greater than 5\n", l);
}

else if (l < 6 && l != 0)
{
printf("%d and is less than 6 and not 0\n", l);
}

else if (l == 0)
{
printf("%d and is 0\n", l);
}

return (0);
}
