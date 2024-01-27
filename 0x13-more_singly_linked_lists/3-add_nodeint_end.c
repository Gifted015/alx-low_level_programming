#include "lists.h"


/**
 *add_nodeint_end - adds a new node at the end of a listint_t list
 *@head: the list to which a new node is to be added
 *@n: new node to be added
 *Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *temp;

temp = *head;

new = malloc(sizeof(listint_t *));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (temp != NULL)
{
while (temp->next != NULL)
temp = temp->next;

temp->next = new;
}

else
*head = new;

return (*head);
}
