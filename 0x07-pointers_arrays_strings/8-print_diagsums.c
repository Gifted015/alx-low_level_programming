#include "main.h"

/**
 *print_diagsums - prints the sum of the two diagonals of a square of integers
 *@a: matrix(array)
 *@size: matrix size
 */

void print_diagsums(int *a, int size)
{
int b, c = size - 1, k = c;
long int i = 0, j = 0;
for (b = 0; b < size * size; b++)
{
if (b % (size + 1) == 0 || b == 0)
i = i + a[b];
if (b == c && b != (size * size) - 1)
{
j = j + a[b];
c = c + k;
}
}


printf("%ld, %ld\n", i, j);
}
