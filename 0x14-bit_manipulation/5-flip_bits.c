#include "holberton.h"
/**
  * flip_bits - find number of bits to flip
  *
  * @n: int 1
  * @m: int 2
  *
  * Return: number to flip
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int z = n ^ m;

	while (z)
	{
		count += z & 1;
		z >>= 1;
	}
	return (count);
}
