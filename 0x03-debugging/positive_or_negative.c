#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* positive_or_negative - indicates whether number is positive or negative
* @i: number to be checked
* Return : positive or negative
*/

int positive_or_negative(int i)
{
int n;
n = i;
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
return (positive_negative);
}
