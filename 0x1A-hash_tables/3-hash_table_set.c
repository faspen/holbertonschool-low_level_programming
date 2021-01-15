#include "hash_tables.h"

/**
* hash_table_set - add element
*
* @ht: table
* @key: where to add
* @value: what to add
*
* Return: 1 on success, 0 on fail
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *tmp;
	unsigned long int index;

	if (!value || !key || !ht || !strcmp(key, ""))
		return (0);
	
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	tmp = malloc(sizeof(hash_node_t));

	/* add to end of list if key isnt found */
	if (!tmp)
		return (0);
	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = ht->array[index];
	ht->array[index] = tmp;
	return (1);
}
