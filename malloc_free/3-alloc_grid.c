#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocate memory for 2d grid
 * @width: width value of grid
 * @height: height value of grid
 * Return: array
 *
 */
int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/*malloc the first array, at each location malloc the second array*/
	/* at each of the first array points*/

	array = malloc(height * sizeof(int *));
	/*chck if broken*/
	if (array == NULL)
	{
		return (NULL);
	}

	y = 0;
	while (y < height)
	{
		array[y] = malloc(width * sizeof(int));
		/*check if broken*/
		if (array[y] == NULL)
		{
			return (NULL);
		}

		while (x < width) /*populate*/
		{
			array[y][x] = 0;
			x = x + 1;
		}
		y = y + 1;
	}
	return (array);
}
