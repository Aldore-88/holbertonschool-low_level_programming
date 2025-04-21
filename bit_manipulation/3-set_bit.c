#include "main.h"
#include <stdio.h>
/**
 * set_bit - set bit at index location
 * @n: starting number
 * @index: index bit to change to a 1
 *
 * Return: 1 working, -1 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > sizeof(*n) * 8)
	{
		return (-1);
	}

	i = 1;
	i = i << index;
	*n = *n | i;

	return (1);
}
