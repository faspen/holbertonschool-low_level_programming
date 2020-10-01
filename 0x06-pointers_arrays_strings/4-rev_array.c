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
	for (n = 0, i = len - 1; n < i; n++, i--)
	{
		char temp = a[n];

		a[n] = a[i];

		a[i] = temp;
	}
}
