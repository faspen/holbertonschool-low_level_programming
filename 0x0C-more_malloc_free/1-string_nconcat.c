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
  * string_nconcat - concat two strings
  *
  * @s1: string 1
  * @s2: string 2
  * @n: bytes of string 2
  *
  * Return: new string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = _strlen(s1);
	j = _strlen(s2);

	cat = malloc((i + j + 1) * sizeof(char));

	if (cat == NULL)
		return (NULL);
	if (n >= j)
		n = j;

	for (k = 0; k < i; k++)
		cat[k] = s1[k];
	for (k = 0; k < n; k++)
	{
		cat[i] = s2[k];
		i++;
	}
	cat[i] = '\0';
	return (cat);
}
