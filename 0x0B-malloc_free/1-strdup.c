#include "holberton.h"
#include <stdlib.h>
/**
  * _strdup - return pointer to duplicate of str
  *
  * @str: duplicated string
  *
  * Return: pointer to new string
  */

char *_strdup(char *str)
{
	char *new;

	unsigned int i;

	unsigned int len;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	new = malloc(sizeof(char) * (len + 1));

	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		new[i] = str[i];
	}
	return (new);
}
