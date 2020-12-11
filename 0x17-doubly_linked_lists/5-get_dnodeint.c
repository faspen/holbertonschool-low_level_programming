#include "lists.h"

/**
* get_dnodeint_at_index - return nth node
* @head: top
* @index: node to return
* Return: nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int count = 0;

	node = head;

	if (node != NULL)
	{
		while (node)
		{
			if (index == count)
				return (head);
			node = node->next;
			head = node;
			count++;
		}
	}
	else
		return (NULL);
	return (head);
}
