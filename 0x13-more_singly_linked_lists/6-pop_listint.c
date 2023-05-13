#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: the head of the node to be popped
 *Return: the head node’s data (n)
 *if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
int num;
listint_t *temp = *head;

if (*head == NULL)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
