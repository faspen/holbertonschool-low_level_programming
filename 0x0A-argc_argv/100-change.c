#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - entry
  *
  * @argc: int
  * @argv: int
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int change, coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);

	while (change >= 25)
	{
		change -= 25;
		coin++;
	}
	while (change >= 10)
	{
		change -= 10;
		coin++;
	}
	while (change >= 5)
	{
		change -= 5;
		coin++;
	}
	while (change >= 2)
	{
		change -= 2;
		coin++;
	}
	while (change >= 1)
	{
		change -= 1;
		coin++;
	}
	printf("%d\n", coin);
	return (0);
}
