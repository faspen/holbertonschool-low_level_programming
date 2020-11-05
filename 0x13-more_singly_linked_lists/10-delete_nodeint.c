#include "lists.h"
/**
  * delete_nodeint_at_index - delete node
  * @head: head
  * @index: location of node to be deleted
  * Return: 1 on success, -1 on fail
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *node;
	listint_t *node2;

	if (*head == NULL)
		return (-1);

	node = *head;

	if (index == 0)
	{
		*head = (**head).next;
		free(node);
		return (1);
	}
	while (node != NULL)
	{
		if (num == index)
		{
			node2->next = node->next;
			free(node);
			return (1);
		}
		num++;
		node2 = node;
		node = node->next;
	}
	return (-1);
}
