#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@array: the array
 *@size: the number of elements in the array
 *@cmp: pointer to the functin to be used to compare values
 *Return: index if successful and -1 if otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int index;

if (array != NULL && cmp != NULL && size > 0)
{
for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}
return (-1);
}
else
return (-1);
}
