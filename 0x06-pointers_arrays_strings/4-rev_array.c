#include "holberton.h"
/**
  * reverse_array - Entry
  *
  * @a: string
  * @n: bytes
  */

void reverse_array(int *a, int n)
{
	int len;

	int i;

	for (len = 0; len < n; len++)
	{
		;
	}
	for (i = 0, n = len - 1; i < n; i++, n--)
	{
		char temp = a[i];

		a[i] = a[n];

		a[n] = temp;
	}
}
