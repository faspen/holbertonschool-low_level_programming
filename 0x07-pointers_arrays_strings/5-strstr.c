#include "holberton.h"
/**
  * _strstr - Entry
  *
  * @haystack: int 1
  * @needle: int 2
  *
  * Return: 0
  */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *i = haystack;
		char *j = needle;

		while (*haystack == *j && *j != 0 && *haystack != 0)
		{
			haystack++;
			j++;
		}
		if (*j == 0)
		{
			return (i);
		}
		haystack = ++i;
	}
	return (0);
}
