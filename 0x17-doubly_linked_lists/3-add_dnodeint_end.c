#include "lists.h"

/**
* add_dnodeint_end - add node to end
* @head: top
* @n: number to add
* Return: address, Null if failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *nav;

	if (!head)
		return (0);
	node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (!*head)
	{
		node->prev = NULL;
		*head = node;
		return (*head);
	}
	nav = *head;
	while (nav->next)
		nav = nav->next;
	nav->next = node;
	node->prev = nav;
	return (node);
}
