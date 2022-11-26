#include "main.h"


/**
 *print_binary - prints the binary representation of a number
 *@n: binary representation
 *Return: nothing
 */

void print_binary(unsigned long int n)
{
  while (n != 0)
    {
      _putchar((n % 2) + 48);
      n = n / 2;
    }
}
