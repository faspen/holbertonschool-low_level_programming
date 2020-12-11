#include "lists.h"

/**
* insert_dnodeint_at_index - insert node at
* @h: top
* @idx: place to insert
* @n: number in new node
* Return: address of new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x = 0;
	dlistint_t *node;
	dlistint_t *temp;

	node = malloc(sizeof(dlistint_t));

	if (!node || !h)
		return (NULL);
	
	node->n = n;

	if (idx == 0)
	{
		node->next = *h;
		*h = node;
		return (*h);
	}

	temp = *h;

	while (temp)
	{
		while (x == idx - 1)
		{
			node->next = temp->next;
			temp->next = node;
			return (node);
		}
		x++;
		temp = temp->next;
	}
	return (NULL);
}
