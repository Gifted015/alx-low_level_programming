#include "main.h"
#include <string.h>
/**
 *reverse_array - reverses the content of an array of integers
 *@a: array of integers
 *@n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
int b, j;
for (b = 0; b < n; b++)
{
j = a[n - 1];
a[n - 1] = a[b];
a[b] = j;
n--;
}
}
