#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	i = 0;

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		array[i] = c;
		i = i + 1;
	}

	return (array);
}
