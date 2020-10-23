#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_all - print anything
  * @format: list of argument types passed
  */

void print_all(const char * const format, ...)
{
	char *str;
	unsigned int i = 0, j;
	va_list valist;

	while (format != NULL)
	{
		va_start(valist, format);
		while (format[i] != 0)
		{
			j = 1;
			switch (format[i])
			{
				case 'c':
				printf("%c", va_arg(valist, int));
				break;
				case 'f':
				printf("%f", va_arg(valist, double));
				break;
				case 'i':
				printf("%d", va_arg(valist, int));
				break;
				case 's':
				str = va_arg(valist, char *);
				if (str == 0)
					str = "(nil)";
				printf("%s", str);
				break;
				default:
				j = 0;
				break;
			}
			if (j && format[i + 1])
				printf(", ");
			i++;
		}
		va_end(valist);
		break;
	}
	printf("\n");
}
