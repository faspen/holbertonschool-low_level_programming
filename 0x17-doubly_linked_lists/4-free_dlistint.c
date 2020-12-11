#include "lists.h"

/**
* free_dlistint - free list
* @head: list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	if (!head)
		return;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
