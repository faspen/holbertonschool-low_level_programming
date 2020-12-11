#include "lists.h"

/**
* add_dnodeint - add node to start of list
* @head: top
* @n: number in node
* Return: address, NULL if failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
