#include "lists.h"

/**
 *print_dlistint - prints all elements of a dlistint_t list
 *@h: doubly linnked list containing elements to be printed
 *Return: the number of nodes in h
 */

size_t print_dlistint(const dlistint_t *h)
{
dlistint_t *temp = (dlistint_t *)h;
int x = 0;

while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
x++;
}

return (x);
}
