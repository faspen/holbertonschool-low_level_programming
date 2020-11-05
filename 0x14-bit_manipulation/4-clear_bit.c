#include "holberton.h"
/**
  * clear_bit - set bit at index to 0
  * @n: int
  * @index: index
  * Return: 1 on success, -1 on fail
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (n == NULL)
		return (-1);
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	i = 1 << index;
	*n = *n & ~i;
	return (1);
}
