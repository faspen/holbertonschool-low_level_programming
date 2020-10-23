#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - add numbers
  * @n: passed value
  * Return: sum
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
