#include "lists.h"
/**
  * print_list - print elements of list
  * @h: starting point
  * Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		number++;
	}
	return (number);
}


