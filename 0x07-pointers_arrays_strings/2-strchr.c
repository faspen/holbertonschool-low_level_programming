#include "holberton.h"
/**
  * _strchr - Entry
  *
  * @s: pointer
  * @c: search for
  * Return: result
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
