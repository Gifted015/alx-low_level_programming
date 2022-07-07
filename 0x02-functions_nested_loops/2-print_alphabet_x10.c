#include <stdio.h>
#include "main.h"
/**
 *print_alphabet -prints all the alphabets
 *Description: prints them 10x
 *Return: print_alphabet
 */

int print_alphabet_x10(void)
{
int x;
int l;
for (l = 48; l <= 57; l++)
{
for (x = 97; x <= 122; x++)
{
putchar(x);
}
putchar('\n');
}
return (0);
}
