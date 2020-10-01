#include "holberton.h"
/**
  * _strncat - Entry
  *
  * @dest: first half
  * @src: second half
  * @n: bytes for src
  *
  * Return: new string
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[j] != '\0' && j < n; j++, i++)
	{
		*(dest + i) = *(src + j);
	}
	dest[i] = '\0';
	return (dest);
}
