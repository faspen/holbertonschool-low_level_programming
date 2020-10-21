#include <stdlib.h>
/**
  * array_iterator - entry
  *
  * @array: the array
  * @size: array size
  * @action: function
  *
  * Return: none
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int len;

	if (action != NULL)
	{
		for (len = 0; len < size; len++)
		{
			if (array != NULL)
			{
				action(array[len]);
			}
		}
	}
}
