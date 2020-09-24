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
			if (size <= 0)
			{
				_putchar('\n');
			}
			_putchar('#');
		}
		_putchar('\n');
	}
}
