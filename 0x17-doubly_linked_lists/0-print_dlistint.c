#include "lists.h"

/**
* print_dlistint - print list
* @h: list to print
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	unsigned int n = 0;

	current = h;
	
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		n++;
	}
	return (n);
}
