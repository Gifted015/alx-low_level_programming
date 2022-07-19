#include "main.h"
#include <string.h>
/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *@a: string
 *Return: a
 */

char *string_toupper(char *a)
{
int b;
for (b = 0; a[b] != '\0'; b++)
{
if (a[b] > 96 && a[b] < 123)
a[b] = a[b] - 32;
}
return (a);
}
