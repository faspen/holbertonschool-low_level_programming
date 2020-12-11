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

	nav = *head;
	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;

	if (!*head)
	{
		*head = node;
		return (*head);
	}
	while (nav->next != NULL)
		nav = nav->next;
	nav->next = node;
	return (nav);
}
