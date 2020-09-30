#include "holberton.h"
/**
  * _strcpy - Entry
  *
  * @dest: Copy to
  * @src: copy from
  *
  * Return: string
  */

char *_strcpy(char *dest, char *src)
{
	int v;

	for (v = 0; src[v] != '\0'; v++)
	{
		*(dest + v) = *(src + v);
	}
	return (dest);
}
