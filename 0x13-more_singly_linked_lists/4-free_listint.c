#include "lists.h"
/**
  * free_listint - free list
  * @head: head
  */

void free_listint(listint_t *head)
{
	listint_t *node;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
