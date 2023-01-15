#include "lists.h"


/**
 *free_listint - frees a listint_t list
 *@head: the list yo be freed
 *Return: nothing
 */

void free_listint2(listint_t **head)
{
listint_t *temp;

while (*head != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
}
