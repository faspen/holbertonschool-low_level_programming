#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_numbers - prints numbers
  *
  * @separator: space between numbers
  * @n: numbers
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		int num = va_arg(list, int);

		printf("%d", num);
		if (separator && (x < (n - 1)))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
