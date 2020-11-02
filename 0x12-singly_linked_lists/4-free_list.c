#include "lists.h"
/**
  * free_list - free mem
  * @head: top of list
  */

void free_list(list_t *head)
{
	list_t *node;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
