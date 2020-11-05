#include "holberton.h"
/**
  * binary_to_uint - from binary to unsigned int
  * @b: number to be converted
  * Return: result
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 1;
	unsigned int i = 0;
	int c;
	unsigned int len;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			i += j;
		}
		j *= 2;
	}
	return (i);
}
