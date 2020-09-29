#include "holberton.h"
/**
  * swap_int - Entry
  *
  * @a: int 1
  * @b: int 2
  */

void swap_int(int *a, int *b)
{
	int r = *a;

	*a = *b;

	*b = r;
}
