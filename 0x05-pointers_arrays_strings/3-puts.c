#include "holberton.h"
/**
  * _puts - Entry
  * @str: String
  */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
