#include <stdio.h>
/**
  * main - Entry
  * Return: 0
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i < 100)
		{
			putchar(' ');
		}
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3 && i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	putchar('\n');
	return (0);
}

