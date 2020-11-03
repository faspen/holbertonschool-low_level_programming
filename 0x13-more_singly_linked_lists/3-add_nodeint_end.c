#include "lists.h"
/**
  *
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *traverse;

	traverse = *head;
	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;

	if (!*head)
	{
		*head = node;
		return (*head);
	}
	while  (traverse->next != NULL)
		traverse = traverse->next;
	traverse->next = node;
	return (traverse);
}
