#include "lists.h"


/**
 *add_node - adds a new node at the beginning of a list
 *@head: list containing previously added nodes
 *@str: string to be add in node (along with string length)
 *Return: address of the new element(pointer to the added node)
 *or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));

if (new == NULL)
return (NULL);

else
{
new->str = strdup(str);
new->len = strlen(str);
new->next = *head;
*head = new;

return (*head);
}
}
