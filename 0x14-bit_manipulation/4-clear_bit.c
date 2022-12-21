#include "main.h"


/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *@n: number to be edited
 *@index: the index starting from 0 of the bit you want to set
 *Return: 1 if it worked, or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
__attribute__((unused)) unsigned long int temp, i;

if (index > 64)
return (-1);

else
{
temp = 1 << index;
temp = ~temp;
*n = *n & temp;
return (1);
}
}
