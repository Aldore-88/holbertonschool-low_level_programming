#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free grid
 * @grid: grid array
 * @height: integer for height
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	while (i < height)
	{
		free(grid[i]);
		i = i + 1;
	}
	free(grid);
}
