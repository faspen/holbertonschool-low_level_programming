#include "holberton.h"
/**
  * print_triangle - Entry
  *
  * @size: determine size
  */

void print_triangle(int size)
{
	int row;
	int col;

	for (row = 1; row <= size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if ((col + row) < size)
				_putchar(' ');
			if ((col + row) >= size)
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
