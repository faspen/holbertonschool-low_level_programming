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
	list_t *node;
	list_t *tail;

	tail = *head;
	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	while (str[i])
		i++;
	node->len = i;

	if (!*head)
	{
		*head = node;
		return (*head);
	}
	while (tail->next != NULL)
		tail = tail->next;

	tail->next = node;
	return (tail);
}
