#include "lists.h"
/**
  * list_len - return number of elements in list
  * @h: struct used
  * Return: number
  */

size_t list_len(const list_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
