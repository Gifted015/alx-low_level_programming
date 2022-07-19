#include "main.h"
#include <string.h>
/**
 *_strncat - concatenates two strings
 *Description: appends the src string to the dest string
 *@dest: string to be apoended to
 *@src: source string
 *@n: number of byte of scr used
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int j;
int a;
for (a = 0; dest[a] != '\0'; a++)
{
}
for (j = 0; j < n; j++)
{
*(dest + a) = src[j];
src++;
}
return (dest);
}
