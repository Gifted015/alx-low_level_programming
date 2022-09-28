#include "lists.h"


/**
 *print_list - prints all the elements of a list_t list
 *@h: list to be printed out
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
size_t x = 1;
int len;
char *str;
list_t *nex;

if (h == NULL)
return (0)

else
{
nex = (list_t *)h;

while (x)
{
len = nex->len;
str = nex->str;

if (nex->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", len, str);

if (nex->next == NULL)
break;

nex = nex->next;
x++;
}

return (x);
}
}
