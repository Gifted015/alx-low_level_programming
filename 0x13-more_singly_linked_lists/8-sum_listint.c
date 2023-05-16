#include "lists.h"


/**
 *sum_listint - sums all the data (n) of a listint_t linked list
 *@head: the head of the listint_t linked list
 *Return: the sum
 */

int sum_listint(listint_t *head)
{
int sum;
listint_t *temp = head;

for (sum = 0; temp != NULL; temp = temp->next)
sum += temp->n;

return (sum);
}
