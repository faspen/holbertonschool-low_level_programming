#include "holberton.h"
/**
  *
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int test;

	for (i = 0; s[i]; i++)
	{
		for (j = 0, test = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				test = 1;
		}
		if (test == 0)
			return (i);
	}
	return (i);
}
