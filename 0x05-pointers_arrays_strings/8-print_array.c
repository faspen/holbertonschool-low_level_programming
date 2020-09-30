#include <stdio.h>
#include "holberton.h"
/**
  * print_array - Entry
  *
  * @a: array
  * @n: number
  */

void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		printf("%d", a[p]);
		if (p < (n - 1))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}	
