#include "main.h"
#include "2-strlen.c"
/**
 *_strcpy - copies the string from src to the buffer
 *Description: including the terminating null byte (\0)
 *@dest: variable to contain copied string
 *@src: variable containing string to be copied
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
long int b;
int n = _strlen(src);
for (b = 0; b < n; b++)
{
if (src[b] == '\0')
break;
*(dest + b) = src[b];
}
return (dest);
}
