#include "main.h"
#include <stdio.h>
/**
 * get_bit - get bit at index
 * @n: number
 * @index: index of binary digit
 *
 * Return: n & 1, value of last digit using & operator
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count;

	count = 0;
	if (sizeof(n) * 8)
	{
		return (-1);
	}
	while (count < index)
	{/*shift bits up to index*/
		n = n >> 1;
		count = count + 1;
	}
	return (n & 1);
}
