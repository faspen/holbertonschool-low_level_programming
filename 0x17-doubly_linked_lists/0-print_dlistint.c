#include "lists.h"

/**
* print_dlistint - print list
* @h: list to print
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
