#include "hash_tables.h"

/**
* hash_table_print - print a hash table
* @ht: table to print
*/
void hash_table_print(const hash_table_t *ht)
{
	char *format = ""; /* make it blank first */
	unsigned long int index;
	hash_node_t *table;

	if (!ht)
		return;
	if (ht)
	{
		putchar('{');
		for (index = 0; index < ht->size; index++)
		{
			table = ht->array[index];
			while (table)
			{
				printf("%s'%s': '%s'", format, table->key, table->value);
				format = ", "; /* now add spacing */
				table = table->next;
			}
		}
		putchar('}');
		putchar('\n');
	}
}
