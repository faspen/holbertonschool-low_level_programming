#include "holberton.h"
#include <stdlib.h>
/**
  * create_array - create array
  *
  * @size: array size
  * @c: character in string
  *
  * Return: pointer to string
  */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int mem;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(c) * size);

	if (arr == 0)
	{
		return (NULL);
	}
	for (mem = 0; mem < size; mem++)
	{
		arr[mem] = c;
	}
	return (arr);
}
