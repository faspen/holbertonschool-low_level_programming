#include "holberton.h"
/**
  * get_bit - return value of bit at index
  * @n: nth bit
  * @index: location
  * Return: value
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
