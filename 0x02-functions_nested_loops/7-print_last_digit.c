#include "holberton.h"
/**
  * print_last_digit - Entry point
  *
  * @m: integer
  *
  * Return: Always r.
  */

int print_last_digit(int m)
{
	int r;

	r = m % 10;
	if (r < 0)
		r = r * -1;
	_putchar('0' + r);
	return (r);
}
