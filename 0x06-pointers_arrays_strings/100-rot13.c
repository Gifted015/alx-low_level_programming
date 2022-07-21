#include "main.h"
#include <string.h>
/**
 *rot13 - encodes a string using rot13
 *@a: string
 *Return: a
 */

char *rot13(char *a)
{
int b, d;
char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char e[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (b = 0; a[b] != '\0'; b++)
{
for (d = 0; c[d] != '\0'; d++)
{
if (a[b] == c[d])
{
a[b] = e[d];
b++;
}
}
}
return (a);
}
