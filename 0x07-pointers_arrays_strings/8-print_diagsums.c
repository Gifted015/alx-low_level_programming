#include "main.h"

/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 *@a: matrix(array)
 *@sixe: matrix size
 */

void print_diagsums(int *a, int size)
{
int b;
long int i = 0, j = 0;
for (b = 0; b < size * size; b++)
{
if (b % (size + 1) == 0 || b == 0)
i = i + a[b];
if (b % (size - 1) == 0 && b != ((size * size) - 1))
j = j + a[b];
}


printf("%ld, %ld\n", i, j);
}
