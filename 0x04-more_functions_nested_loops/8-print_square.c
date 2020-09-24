#include "holberton.h"
/**
  * print_square - Entry
  *
  * @size: integer
  */

void print_square(int size)
{
	int r;
	int c;

	for (r = 1; r <= size; r++)
	{
		for (c = 1; c <= size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
