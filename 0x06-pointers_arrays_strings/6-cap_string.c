#include "main.h"
#include <string.h>
/**
 *cap_string - capitalizes all words of a string
 *Description: Separators of words: space tabulation new line , ; . ! ? " ( ) { and }
 *@a: string
 *Return: a
 */

char *cap_string(char *a)
{
int b;
for (b = 0; a[b] != '\0'; b++)
{
if ((a[b] > 96 && a[b] < 123) && (a[b - 1] == 9 || a[b - 1] == ' ' || a[b - 1] == '\n' || a[b - 1] == ',' || a[b - 1] == ';' || a[b - 1] == '.' || a[b - 1] == '!' || a[b - 1] == '?' || a[b - 1] == '"' || a[b - 1] == '(' || a[b - 1] == ')' || a[b - 1] == '{' || a[b - 1] == '}'))
a[b] = a[b] - 32;
}
return (a);
}
