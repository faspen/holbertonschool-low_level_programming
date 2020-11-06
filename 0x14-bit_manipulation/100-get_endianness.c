#include "holberton.h"
/**
  * get_endianness - little or big
  * Return: 1 if little, 0 if big
  */

int get_endianness(void)
{
	int n = 1;

	if (*(char *)&n == 1)
	{
		return (1);
	}
	else
		return (0);
}
