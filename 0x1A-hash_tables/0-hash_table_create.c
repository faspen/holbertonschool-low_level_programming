#include "hash_tables.h"

/**
* hash_table_create - create a hash table
* @size: size of table
* Return: pointer to table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->array = malloc(sizeof(hash_table_t *) * size);
	if (!(ht->array))
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	return (ht);
}
