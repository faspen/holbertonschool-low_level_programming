#include "holberton.h"
#include <stdlib.h>
#include "holberton.h"
/**
  * _strlen - Entry
  * @s: string
  * Return: length
  */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
/**
  * str_concat - concatenate two strings
  *
  * @s1: string 1
  * @s2: string 2
  *
  * Return: result
  */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	unsigned int i, j, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = _strlen(s1);
	j = _strlen(s2);

	cat = malloc((i + j + 1) * sizeof(char));

	if (cat == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		cat[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		cat[i] = s2[k];
		i++;
	}
	cat[i] = '\0';
	return (cat);
}
