#include "holberton.h"

/**
  * times_table - Entry point
  */

void times_table(void)
{
	int m;
	int t;
	int r;

	for (m = 0; m <= 9; m++)
	{
			for (t = 0; t <= 9; t++)
			{
				r = t * m;
				if (0 != r / 10)
				{
					_putchar((r / 10) + '0');
				}
				_putchar((r % 10) + '0');
				if (t != 9)
				{
					if ((r = ((t + 1) * m)) >= 10)
					{
						_putchar(',');
						_putchar(' ');
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
	}
}
