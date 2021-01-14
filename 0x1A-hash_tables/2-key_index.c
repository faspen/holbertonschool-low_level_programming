#include "hash_tables.h"

/**
* key_index - gives index of a key
* @key: key to find
* @size: size of table
* Return: index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
