#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0; Success
  */

int main(void)
{
	int num1 = 48, num2 = 48, count = 49;

	while (num1 < 57)
	{
		num2 = count;
		while (num2 <= 57)
		{
			putchar(num1);
			putchar(num2);
			if (num1 != 56 || num2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		count++;
		num1++;
	}
	putchar(10);
	return (0);
}

