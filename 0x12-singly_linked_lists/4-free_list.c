#include "lists.h"
/**
  * free_list - free mem
  * @head: top of list
  */

void free_list(list_t *head)
{
	list_t *new = head;

	while (new != NULL)
	{
		new = new->next;
		free(new->str);
		free(new);
	}
}
