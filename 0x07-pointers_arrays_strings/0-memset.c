#include "holberton.h"
/**
  * _memset - Entry
  *
  * @s: memory area
  * @b: constant
  * @n: first characters
  *
  * Return: new string
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mem;
	char *s2;

	s2 = s;

	for (mem = 0; mem < n; mem++)
	{
		*s = b;
		s++;
	}
	return (s2);
}
