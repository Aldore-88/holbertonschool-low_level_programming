#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - array of numbers between min and max
 * @min: min integer
 * @max: max integer
 * Return: returns array
 *
 *
 */
int *array_range(int min, int max)
{
	int *array;
	int size;
	int i;

	i = 0;
	size = max - min + 1;
	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		array[i] = min + i;
		i = i + 1;
	}

	return (array);
}
