#include "main.h"
#include <string.h>
/**
 *_strcat - concatenates two strings
 *Description: appends the src string to the dest string
 *@dest: string to be apoended to
 *@src: source string
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
