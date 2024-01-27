#include "lists.h"


/**
 *listint_len - gets the number of elements in a linked listint_t list.
 *@h: the listint_t list
 *Return: the number of nodes/elements
 */

size_t listint_len(const listint_t *h)
{
listint_t *temp;
size_t x;

temp = (listint_t *)h;

for (x = 0; temp != NULL; x++, temp = temp->next)
{
}

return (x);
}
