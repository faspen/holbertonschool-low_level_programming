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
	unsigned int m;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	for (m = 0; m < (size * nmemb); m++)
		arr[m] = '\0';

	return (arr);
}
