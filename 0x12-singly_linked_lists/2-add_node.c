#include "lists.h"
/**
  * add_node - add a new node ot list_t
  *
  * @head: top of list
  * @str: string to be duplicated
  *
  * Return: address of new element
  */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	new = malloc(sizeof(list_t));

	new->str = strdup(str);

	while (str[i])
		i++;
	new->len = i;
	new->next = *head;
	*head = new;

	return (*head);
}
