#include "hash_tables.h"

/**
* hash_table_delete - delete hash table
* @ht: table to delete
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *table = NULL, *tmp = NULL;
	unsigned long int idx = 0;

	if (ht->array)
	{
		for (idx = 0; idx < ht->size; idx++)
		{
			table = ht->array[idx];
			while (table)
			{
				tmp = table->next;
				free(table->key);
				free(table->value);
				free(table);
				table = tmp;
			}
		}
		free(ht->array);
	}
	if (ht)
		free(ht);
}
