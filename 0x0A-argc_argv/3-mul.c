#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
  * main - entry
  *
  * @argc: count
  * @argv: string
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", mul);
	return (0);
}
