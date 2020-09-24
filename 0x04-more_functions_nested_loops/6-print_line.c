#include "holberton.h"
/**
  * print_line - Entry
  *
  * @n: _
  */

void print_line(int n)
{
	int w;

	for (w = 1; w <= n; w++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
