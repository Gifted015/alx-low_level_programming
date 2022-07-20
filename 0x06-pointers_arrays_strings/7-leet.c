#include "main.h"
#include <string.h>
/**
 *leet - encodes a string into 1337.
 *@a: string
 *Return: a
 */

char *leet(char *a)
{
int b, d;
char e[5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'}, {'t', 'T'}, {'l', 'L'}};
char c[] = "43071";
for (b = 0; a[b] != '\0'; b++)
{
for (d = 0; c[d] != '\0'; d++)
{
if (a[b] == e[d][0] || a[b] == e[d][1])
{
a[b] = c[d];
}
}
}
return (a);
}
