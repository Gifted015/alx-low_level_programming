#include "lists.h"


/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer to head of the listint_t list to which new node is to be added to
 *@idx: the index of the list where the new node should be added. Index starts at 0
 *@n: integer to be put in the new node
 *Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int x;
listint_t *temp, *temp2, *new;

temp = *head;

if (temp == NULL && idx != 0)
return (NULL);

else
{
new = malloc(sizeof(listint_t *));
if (new == NULL)
return (NULL);

for (x = 1; x < idx; x++)
{
if (temp->next == NULL)
return (NULL);
temp = temp->next;
}
new->n = n;
if (idx == 0)
temp2 = temp;
else
temp2 = temp->next;
temp->next = new;
new->next = temp2;
temp->next = new;
return (new);
}
}
