#include "search_algos.h"

/**
* linear_search - search array for value
* @array: array to search
* @size: array size
* @value: value to find
* Return: value found, or -1 if missing
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
