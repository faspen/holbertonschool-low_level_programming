#include "holberton.h"
/**
  * _strncpy - Entry
  *
  * @dest: copy location
  * @src: copy source
  * @n: bytes
  *
  * Return: new string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
