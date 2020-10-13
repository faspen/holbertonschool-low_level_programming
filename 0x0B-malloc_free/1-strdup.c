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

	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(char) * 11);
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		*(new + i) = *(str + i);
	}
	return (new);
}
