#include "holberton.h"

void print_square(int size)
{
	int r;
	int c;

	for (r = 1; r <= size; r++)
	{
		for (c = 1; c <= size; c++)
		{
			if (size < 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}       
