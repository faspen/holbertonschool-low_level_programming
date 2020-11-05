#include "holberton.h"
/**
  * print_binary - print n in binary
  * @n: given number
  */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);

	_putchar('0' + (n & 1));
}
