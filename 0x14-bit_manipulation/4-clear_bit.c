#include "main.h"


/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *@n: number to be edited
 *@index: the index starting from 0 of the bit you want to set
 *Return: 1 if it worked, or -1 if an error occured
 */

int clear_bit(__attribute__((unused)) unsigned long int *n, unsigned int index)
{
  __attribute__((unused)) unsigned long int temp, i;

  if (index > 64)
    return (-1);

  else
    {
      for (i = 0, temp = 0; i < 64; i++, temp = temp << 1)
	{
	  if (i == 64)
	    temp = temp | 0;
	  else
	    temp = temp | 1;
	}
      print_binary(temp);
      printf("\n");
      return (1);
    }
}
