#include "main.h"

/**
 *array_range - creates an array of integers
 *@min: smallest integer (starting point)
 *@max: largest integer (end point)
 *Return: pointer to the newly created array
 *or NULL if function fails
 */

int *array_range(int min, int max)
{
int i, j = 0;
int *new;

if (min > max)
return (NULL);

else
{
new = malloc(sizeof(int) * ((max - min) + 1));

if (new != NULL)
{
for (i = min; i <= max; i++)
{
new[j] = i;
j++;
}
return (new);
}

else
return (NULL);
}
}
