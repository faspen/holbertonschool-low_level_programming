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
	dlistint_t *node, *temp;

	node = malloc(sizeof(dlistint_t));

	if (!node || !h)
		return (NULL);
	node->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!*h)
	{
		node->next = NULL;
		node->prev = NULL;
		*h = node;
		return (node);
	}
	temp = *h;

	while (x < idx)
	{
		if (x + 1 == idx && !temp->next)
			return (add_dnodeint_end(h, n));
		if (!temp->next && x + 1 != idx)
			return (NULL);
		temp = temp->next;
		x++;
	}
	node->next = temp;
	node->prev = temp->prev;
	temp->prev->next = node;
	temp->prev = node;

	return (node);
}
