#include "lists.h"


/**
 *free_list - frees a list
 *@head: list to be freed out
 *Return: nothing
 */

void free_list(list_t *head)
{
list_t *nex, *cur;

nex = (list_t *)head;

while (nex->next != NULL)
{
cur = nex;
nex = nex->next;

free(cur->str);
free(cur);
}

free(nex->str);
free(nex);
}
