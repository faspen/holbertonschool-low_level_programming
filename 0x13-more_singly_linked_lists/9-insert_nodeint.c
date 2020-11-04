#include "lists.h"
/**
  * insert_nodeint_at_index - insert node at certain point
  * @head: head
  * @idx: index
  * @n: int
  * Return: new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a = 0;
	listint_t *node;
	listint_t *node2;

	node = malloc(sizeof(listint_t));

	if (!node || !head)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (*head);
	}

	node2 = *head;

	while (node2)
	{
		while (a == idx - 1)
		{
			node->next = node2->next;
			node2->next = node;
			return (node);
		}
		a++;
		node2 = node2->next;
	}
	return (NULL);
}
