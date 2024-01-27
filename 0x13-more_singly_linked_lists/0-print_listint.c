#include "lists.h"


/**
 *print_listint - prints all the elements of a listint_t list
 *@h: the list to be printed
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
listint_t *temp;
size_t x;

temp = (listint_t *)h;

for (x = 0; temp != NULL; x++, temp = temp->next)
{
printf("%d\n", temp->n);
}

return (x);
}
