#include "holberton.h"
/**
  * rev_string - Entry
  *
  * @s: string
  */

void rev_string(char *s)
{
	int i;

	int j;

	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		;
	}

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		char ch = s[i];

		s[i] = s[j];

		s[j] = ch;
	}
}
