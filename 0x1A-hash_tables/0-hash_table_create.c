#include "hash_tables.h"

/**
* hash_table_create - create a hash table
* @size: size of table
* Return: pointer to table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	hash_node_t **chain = NULL;

	if (size <= 0)
		return (NULL);
	
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	
	chain = malloc(size * sizeof(hash_node_t));
	if (chain == NULL)
		return (NULL);
	
	ht->size = size;
	ht->array = chain;
	return (ht);
}
