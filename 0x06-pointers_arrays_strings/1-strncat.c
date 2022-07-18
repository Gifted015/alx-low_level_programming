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
int a = strlen(dest);
for (j = a; j < (a + n); j++)
{
*(dest + j) = *src;
src++;
}
return (dest);
}
