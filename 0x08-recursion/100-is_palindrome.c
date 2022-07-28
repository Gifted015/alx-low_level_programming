#include "main.h"
/**
 *_ass - assigns a string to a buffer
 *@s: string
 *@a: buffer
 *@n: number of the string
 *Return: end of string (s)
 */

char *_ass(char *s, char *a, int *n)
{
if (*s == '\0')
{
return (s - 1);
}
else
*n = *n + 1;
*a = *s;
return (_ass((s + 1), (a + 1), n));
}


/**
 *_rev - reverses a string and assigns it to a buffer
 *Description: Will only function well after function _ass as been called
 *@s: string
 *@a: buffer
 *Return: buffer
 */

char *_rev(char *s, char *a)
{
if (*s == '\0')
{
return (a);
}
else
*a = *s;
return (_rev((s - 1), (a + 1)));
}


/**
 *_palindrome - compares two strings
 *@i: 1st string
 *@j: 2nd string
 *@k: int to count the similar characters
 *Return: k
 */

int _palindrome(char *i, char *j, int k, char *l)
{
if (i == l)
return (k);

else if (*i == *j)
k = k + 1;
return (_palindrome((i + 1), (j + 1), k, l));
}


/**
 *is_palindrome - checks if a string is a palindrome
 *@s: string
 *Return: 1 if s is a palindrome otherwise returns 0
 */

int is_palindrome(char *s)
{
int n[] = {0};
int r;
char *k;
char i[1000], j[1000];
s = _ass(s, i, n);
k = &i[*n];
_rev(s, j);
r = _palindrome(i, j, 0, k);

if (r == *n)
return (1);

else
return (0);
}
