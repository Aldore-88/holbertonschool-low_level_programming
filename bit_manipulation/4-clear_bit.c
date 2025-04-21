#include "main.h"
#include <stdio.h>
/**
 * clear_bit - clear bit at index location
 * @n: starting number
 * @index: index bit to change
 *
 * Return: 1 working, -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > sizeof(*n) * 8)
	{
		return (-1);
	}

	i = 1;
	i = i << index;
	*n = *n & ~i; /*using & and inverse of i to target bit*/

	return (1);
}
