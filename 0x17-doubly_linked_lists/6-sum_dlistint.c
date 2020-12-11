#include "lists.h"

/**
* sum_dlistint - return sum of data
* @head: top
* Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

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
