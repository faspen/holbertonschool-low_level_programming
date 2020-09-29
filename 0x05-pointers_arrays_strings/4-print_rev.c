#include "holberton.h"
/**
  * _print_rev - Entry
  * @str: String
  */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
		for (i--; i >= 0; i--)
		{
			_putchar(s[i]);
		}
	_putchar('\n');
}
