#include "holberton.h"
#include <stdlib.h>
/**
  * array_range - create array from min to max
  *
  * @min: minimum
  * @max: maximum
  *
  * Return: string
  */

int *array_range(int min, int max)
{
	int *arr;
	int i = 0, tempmin, total;

	total = max - min;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (total + 1));

	if (arr == NULL)
		return (NULL);

	tempmin = min;

	while (i <= (total + 1))
	{
		i++;
		tempmin++;
		arr[i] = tempmin;
	}

	return (arr);
}
