#include "holberton.h"
/**
  * print_number - Entry
  *
  * @n: integer
  */

void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;

		_putchar('-');
	}
	if (n >= 0 && n <= 9)
		_putchar((n % 10) + '0');
	else if (n >= 10 && n <= 99)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 100 && n <= 999)
	{
		_putchar((n / 100) + '0');
		_putchar('0' + ((n / 10) % 10));
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar((n / 1000) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
}
