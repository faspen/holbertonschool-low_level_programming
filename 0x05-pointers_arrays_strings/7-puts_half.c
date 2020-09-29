#include "holberton.h"
/**
  * puts_half - Entry
  * @str: string
  */

void puts_half(char *str)
{
	int i;

	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}

	if (len % 2 == 0)
	{
		i = len / 2;
	}

	else
	{
		i = (len + 1) / 2;
	}

	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
