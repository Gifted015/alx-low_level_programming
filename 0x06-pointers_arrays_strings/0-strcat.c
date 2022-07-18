#include "main.h"
#include <string.h>
/**
 *_strcat - concatenates two strings
 *Description: appends the src string to the dest string
 *@dest: string to be apoended to
 *@src: source string
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
int i;
int q = strlen(dest) + strlen(src);
for (i = 0; i < q; i++)
{
if (dest[i] != '\0')
{
i++;
}
else
{
*(dest + i) = *src;
src++;
}
}
return (dest);
}
