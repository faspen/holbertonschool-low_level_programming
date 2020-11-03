#include "lists.h"
/**
  *add_nodeint - add new node to beginning of list
  *
  * @head: address
  * @n: number
  *
  * Return: node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}
