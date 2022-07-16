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
long int i;
int n = _strlen(src);
for (i = 0; dest[i] != '\0'; i++)
{
*(dest + i) = '\0';
}
for (b = 0; b < n; b++)
{
*(dest + b) = src[b];
}
return (dest);
}
