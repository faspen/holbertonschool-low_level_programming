#include "holberton.h"
/**
  * _memcpy - Entry
  *
  * @dest: copy to
  * @src: copy from
  * @n: bytes
  *
  * Return: result
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; mem < n; mem++)
	{
		*(dest + mem) = *(src + mem);
	}
	return (dest);
}
