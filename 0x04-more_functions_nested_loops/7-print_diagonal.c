#include "holberton.h"
/**
  * print_diagonal - Entry
  *
  * @n: determine size
  */

void print_diagonal(int n)
{
	int rows;
	int space;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (rows = 0; rows < n; rows++)
	{
		for (space = 0; space < rows; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
}
