#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: integer involved in swapping
 *@b: integer involved in swapping
 */

void swap_int(int *a, int *b)
{
int x = *a;
int y = *b;
*a = y;
*b = x;
}
