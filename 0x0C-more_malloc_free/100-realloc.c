#include "holberton.h"
#include <stdlib.h>
/**
  * _realloc - entry
  *
  * @ptr: array
  * @old_size: old
  * @new_size: new
  *
  * Return: result
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *voiid;
	char *arr;
	char *temp = ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	arr = malloc(new_size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < new_size && i < old_size; i++)
	{
		arr[i] = temp[i];
	}
	voiid = arr;
	free(ptr);
	return (voiid);
}
