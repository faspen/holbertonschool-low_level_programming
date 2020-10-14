#include "holberton.h"
#include <stdlib.h>
/**
  *
  */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
