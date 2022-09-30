#include "lists.h"

/**
 *free_dlistint - frees a dlistint_t list
 *@head: doubly linnked list containing elements to be freed
 *Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
if (head != NULL)
{
while (head->next != NULL)
{
head = head->next;
free(head->prev);
}
free(head);
}
}
