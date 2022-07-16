#include "main.h"
#include "2-strlen.c"
/**
 *print_array - prints n elements of an array of integers
 *@a: array
 *@n: number of elements to be printed
 */

void print_array(int *a, int n)
{
long int b;
for (b = 0; b < n; b++)
{
printf("%d", a[b]);
if (b < (n - 1))
printf(", ");
}
printf("\n");
}
