#include "holberton.h"
/**
  * print_alphabet_x10 - Entry point
  *
  * Return: Always 0; Success
  */

void print_alphabet_x10(void)
{
	int b;
	int r;

	for (r = 1; r <= 10; r++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
