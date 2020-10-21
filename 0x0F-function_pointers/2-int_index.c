#include <stdlib.h>
/**
  * int_index - entry
  *
  * @array: array
  * @size: size
  * @cmp: function
  *
  * Return: -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int len;

	if (size <= 0)
	{
		return (-1);
	}

if (cmp != NULL && array != NULL)
{
	for (len = 0; len < size; len++)
	{
		if (cmp(array[len]) != 0)
		{
			return (len);
		}
	}
}
return (-1);
}
