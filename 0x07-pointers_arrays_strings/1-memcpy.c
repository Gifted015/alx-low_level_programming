#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: memory area where bytes are to be copied to
 *@src: memory area where bytes are to be copied from
 *@n: number of bytes in the memory area to be copied
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
dest[a] = src[a];
if (src[a] == '\0')
break;
}
return (dest);
}
