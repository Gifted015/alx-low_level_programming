#include "lists.h"


/**
 *list_len - counts the number of elements of a list_t list
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

while (nex->next != NULL)
{
nex = nex->next;
x++;
}

return (x);
}
}
