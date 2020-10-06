#include <stdio.h>
#include "holberton.h"
/**
  * print_diagsums - Entry
  *
  * @a: point
  * @size: int
  */

void print_diagsums(int *a, int size)
{
	int i;
	long int fd = 0, bd = 0;

	if (size <= 0)
		printf("0, 0\n");
	else
	{
		for (i = 0; i < size; i++)
		{
			fd += *(a + ((i * size) + i));
			bd += *(a + ((i * size) + (size - 1 - i)));
		}
		printf("%ld, %ld\n", fd, bd);
	}
}
