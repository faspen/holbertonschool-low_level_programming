#include "lists.h"

/**
* dlistint_len - return number of elements
* @h: list
* Return: elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
