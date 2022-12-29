#include "main.h"


/**
 *flip_bits - calculates how many number of bits you would need to flip to get from one number to another
 *@n: number to be fliped
 *@m: number to get from the flipping
 *Return: the number of bit to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int num = 0;
while (n >> 0)
{
if ((n & 1) != (m & 1))
num++;
n = n >> 1;
m = m >> 1; }
return (num); }
