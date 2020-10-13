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
	int len = _strlen(s1) + _strlen(s2) - 1, i, j;

	char *cat = malloc(sizeof(char) * len);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (cat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] !=  '\0'; i++)
	{
		cat[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		cat[i + j] = s2[j];
	}

	return (cat);
}
