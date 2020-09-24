#include "holberton.h"
/**
  * more_numbers - Start
  */

void more_numbers(void)
{
	int r;
	int i;

	for (r = 1; r <= 10; r++)
	{
	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
		{
			_putchar((i / 10) + '0');
		}
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
	}
}
