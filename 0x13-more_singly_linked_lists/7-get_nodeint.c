#include "lists.h"
/**
  * get_nodeint_at_index - return nth node
  *
  * @head: head
  * @index: index
  *
  * Return: nth node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count = 0;

	current = head;
	
	if (current != NULL)
	{
		while (current)
		{
			if (index == count)
				return (head);
			count++;
			head = current;
			current = current->next;
		}
	}
	else
		return (NULL);
	return (head);
}
