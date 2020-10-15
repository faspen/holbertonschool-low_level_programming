#include <stdlib.h>
#include "holberton.h"
/**
  * malloc_checked - allocate memory
  * @b: int
  * Return: result
  */

void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
