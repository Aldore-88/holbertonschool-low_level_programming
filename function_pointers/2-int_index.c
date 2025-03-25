#include "function_pointers.h"
/**
 * int_index - index number of match
 * @array: array to check through
 * @size: size of array
 * @cmp: compare function array
 * Return: index number i
 *
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <=  0)
	{
		return (-1);
	}

	while (i <= size)
	{
		if ((cmp)(array[i]) != 0)
		{
			return (i);
		}
		else
			i = i + 1;
	}
	return (-1);
}
