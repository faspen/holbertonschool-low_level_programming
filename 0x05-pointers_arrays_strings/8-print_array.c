#include <stdio.h>
#include "holberton.h"
/**
  *
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
