#include "lists.h"


/**
 *delete_nodeint_at_index - deletes the node
 *at index index of a listint_t linked list
 *@head: pointer to the head of the list
 *@index: the index of the node that should be deleted.
 *Index starts at 0
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *temp2, *temp3;
unsigned int x;

temp = *head;

if (temp == NULL)
return (-1);

if (index == 0)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
else
{
for (x = 0; x < index; x++)
{
if (temp->next == NULL)
return (-1);
temp = temp->next;
}
temp2 = temp->next;
temp->next = NULL;
temp = *head;
temp3 = temp;
free(*head);
for (x = 0; temp->next->next != NULL; x++)
temp = temp->next;
temp->next = temp2;
*head = temp3;
}

return (1);
}
