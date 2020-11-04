#include "lists.h"
/**
  * sum_listint - sum of all data
  * @head: head
  * Return: sum
  */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum;

	node = head;

	if (node != NULL)
	{
		while (node)
		{
			sum += node->n;
			node = node->next;
		}
	}
	else
		return (0);
	return (sum);
}
