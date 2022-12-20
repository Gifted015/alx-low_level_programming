#include "main.h"


/**
 *set_bit - sets the value of a bit to 1 at a given index
 *@n: number to be edited
 *@index: the index, starting from 0 of the bit to be set
 *Return 1 if it worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
__attribute__((unused))  unsigned long int temp;

if (index > 64)
return(-1);

else
{
temp = 1 << index;
*n = *n | temp;
return (1);
}
}
