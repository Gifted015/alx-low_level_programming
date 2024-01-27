#include "main.h"

/**
 *_len - gets the lenght of a string
 *@s: string
 *@i: length of the string, originally at 0
 *Return: i
 */

int _len(char *s, int i)
{
if (*s == '\0')
return (i);

i = i + 1;

return (_len((s + 1), i));
}


/**
 *_strlen_recursion - returns the lenght of a string
 *@s: string
 *Return: i
 */

int _strlen_recursion(char *s)
{
int i = 0;
i = _len(s, i);
return (i);
}
