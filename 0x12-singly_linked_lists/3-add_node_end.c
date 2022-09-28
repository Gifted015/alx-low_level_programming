#include "lists.h"


/**
 *add_node_end - adds a new node at the end of a list
 *@head: list containing previously added nodes
 *@str: string to be add in node (along with string length)
 *Return: address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t)), *temp;

if (new == NULL)
return (NULL);

else
{
new->str = strdup(str);
new->len = strlen(str);
new->next = NULL;
temp = *head;

if (temp == NULL)
*head = new;

else
{
while (temp->next != NULL)
temp = temp->next;

temp->next = new;
}
return (*head);
}
}
