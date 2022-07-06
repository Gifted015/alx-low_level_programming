#include <stdio.h>
#include "main.h"
/**
 *print_alphabet -prints all the alphabets
 *Description: prints them in lowercase
 *Return: print_alphabet
 */
int print_alphabet(void)
{
int x;
for(x = 97; x <= 122; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
