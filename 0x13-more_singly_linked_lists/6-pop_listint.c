#include "lists.h"
/**
  * pop_listint - delete head node
  * @head: head
  * Return: head node data
  */

int pop_listint(listint_t **head)
{
	int num = 0;
	listint_t *node;

	if (*head == NULL)
		return (0);
	node = *head;

	num = node->n;
	*head = node->next;
	free(node);

	return (num);
}
