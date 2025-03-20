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
	
	size = max - min + 1;

	array = malloc(sizeof(int) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		array[min] = min;
		min = min + 1;
	}

	return (array);
}
