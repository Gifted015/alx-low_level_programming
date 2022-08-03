#include "main.h"

/**
 *alloc_grid - creates a 2 dimensional array of integers i.e A[h][w]
 *@width: the width of the array i.e w in A[h][w]
 *@height: the height of the array i.e h in A[h][w]
 *Return: NULL on failure and
 *pointer to the array on success
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **A;

if (width <= 0 || height <= 0)
{
return (NULL);
}

else
{
A = malloc(sizeof(int *) * height);
if (A != NULL)
{
for (i = 0; i < height; i++)
{
A[i] = malloc(sizeof(int) * width);
if (A[i] != NULL)
{
for (j = 0; j < width; j++)
{
A[i][j] = 0;
}
}
else
{
free(A[i]);
free(A);
return (NULL);
}
}
}
else
{
free(A);
return (NULL);
}
return (A);
}
}
