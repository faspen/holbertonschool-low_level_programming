#include "holberton.h"
/**
  * puts2 - Entry
  * @str: string
  */

void puts2(char *str)
{
	int i;

	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}

	for (i = 0; i <= len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
