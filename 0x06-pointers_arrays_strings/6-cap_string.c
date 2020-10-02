#include "holberton.h"
/**
  * cap_string - Entry
  *
  * @c: string
  *
  * Return: new string
  */

char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 0 && c[i] <= 47)
		{
			i++;
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
			}
		}
		else if (c[i] >= 58 && c[i] <= 64)
		{
			i += 2;
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
			}
		}

	}
	return (c);
}
