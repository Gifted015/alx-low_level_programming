#include "lists.h"


/**
 *add_dnodeint - adds a new node at the beginning of a list
 *@head: doubly linked lists containing previously added nodes
 *@n: int to be added in new node
 *Return: the address of the new elment(node)
 *or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));

if (new == NULL)
{
free(new);
return (NULL);
}

new->n = n;
new->prev = NULL;
new->next = *head;

*head = new;

return (*head);
}
