#include "lists.h"


/**
 *print_list - counts the number of elements of a list_t list
 *@h: list containing elements
 *Return: the number of elements in h
 */

size_t list_len(const list_t *h)
{
size_t x = 1;
list_t *nex;

if (h == NULL)
return (0);

else
{
nex = (list_t *)h;

while (x)
{
nex = nex->next;
x++;

if (nex->next == NULL)
break;
}

return (x);
}
}
