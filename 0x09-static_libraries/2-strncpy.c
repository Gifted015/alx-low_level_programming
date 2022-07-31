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
int k;
for (j = 0; j < n; j++)
{
if (src[j] != '\0')
{
dest[j] = src[j];
}
else
break;
}
for (k = j; k < n; k++)
{
dest[k] = '\0';
}
return (dest);
}
