#include "main.h"
#include <string.h>
#include "2-strlen.c"
/**
 *rev_string - reverses a string
 *@s: string passed
 */

void rev_string(char *s)
{
int a, r;
int q = strlen(s);
for (r = 0; r < q / 2; r++)
{
a = s[r];
s[r] = s[q - r - 1];
s[q - r - 1] = a;
}
}
