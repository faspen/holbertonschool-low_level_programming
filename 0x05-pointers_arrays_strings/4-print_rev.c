#include "holberton.h"
/**
  * print_rev - Entry
  * @s: String
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
