#include "main.h"
#include <string.h>
/**
 *_strncpy - copies a string.
 *Description: copies the src string to the dest string
 *@dest: string to be apoended to
 *@src: source string
 *@n: number of byte of scr used
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int j;
int a;
for (a = 0; dest[a] != '\0'; a++)
{
}
for (j = 0; j < n; j++)
{
dest[j] = src[j];
a++;
if (src[j] == '\0')
j = n;
}
return (dest);
}
