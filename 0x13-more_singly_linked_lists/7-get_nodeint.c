#include "lists.h"


/**
 *get_nodeint_at_index - function that
 *@head: the listint_t linked list
 *@index: the index of the node, starting at 0
 *Return: the nth node of a listint_t linked list
 *if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x;
listint_t *temp = head;

for (x = 0; x < index; x++)
{
if (temp == NULL)
break;
temp = temp->next;
}
return (temp);
}
