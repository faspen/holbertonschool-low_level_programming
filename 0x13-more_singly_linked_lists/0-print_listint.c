#include "lists.h"
/**
  * print_listint - print elements of list
  * @h: int
  * Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
