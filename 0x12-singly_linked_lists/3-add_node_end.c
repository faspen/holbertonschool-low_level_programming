#include "lists.h"
/**
  * add_node_end - add a new node to list_t
  *
  * @head: top of list
  * @str: string to be duplicated
  *
  * Return: address of new element
  */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;
	list_t *tail;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);

	while (str[i])
		i++;
	new->len = i;
	new->next = NULL;
	tail = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tail = *head;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new;
	}
	return (tail);
}
