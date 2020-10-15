#include "holberton.h"
#include <stdlib.h>
/**
  * _calloc - allocate memory for an array
  *
  * @nmemb: elements
  * @size: bytes
  *
  * Return: memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;


	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	return (arr);
}
