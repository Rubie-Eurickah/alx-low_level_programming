#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory allocated
 * @grid: the pointer to the array pointer
 * @height: the array
 *
 * Return: Free
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
