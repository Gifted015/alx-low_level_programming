#include "lists.h"


/**
 *add_nodeint - adds a new node at the beginning of a listint_t list
 *@head: the list to which a new node is to be added
 *@n: new node to be added
 *Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp;
temp = (listint_t *)*head;
new = malloc(sizeof(listint_t *));
if (new == NULL)
return (NULL);

new->n = n;
new->next = temp;
*head = new;

return (*head);
}
