#include "holberton.h"
#include <stdlib.h>
/**
  * _strcat - concatenate
  *
  * @dest: first
  * @src: second
  *
  * Return: new string
  */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	return (dest);
}
/**
  * argstostr - Entry
  *
  * @ac: int
  * @av: int
  *
  * Return: result
  */

char *argstostr(int ac, char **av)
{
	int len = 0;
	int i, j;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}

	str = malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		str = _strcat(str, av[i]);
		str = _strcat(str, "\n");
	}
	str[len] = '\0';

	return (str);
}
