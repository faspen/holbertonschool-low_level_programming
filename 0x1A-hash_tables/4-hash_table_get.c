#include "hash_tables.h"

/**
* hash_table_get - get value from table
*
* @ht: hash table
* @key: key to extract value from
*
* Return: value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (!key || !ht)
		return (NULL);
	
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
