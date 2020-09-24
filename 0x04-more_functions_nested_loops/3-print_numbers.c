#include "holberton.h"
/**
  * print_numbers - Entry
  *
  * Return: always 0;
  */

void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
