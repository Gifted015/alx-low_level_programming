#include "main.h"

/**
 *_strcat - concatenates two strings
 *Description: appends the src string to the dest string
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{

while (*src != '\0')
{
if (*dest != '\0')
{
dest++;
}
else
{
*dest = *src;
dest++;
src++;
}
}
return (src);
}
