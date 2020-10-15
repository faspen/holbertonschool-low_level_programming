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
	int i = 0, tempmin;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	tempmin = min;

	while (i <= (max - min))
	{
		i++;
		tempmin++;
		arr[i] = tempmin;
	}
	arr[min] = '\0';

	return (arr);
}
