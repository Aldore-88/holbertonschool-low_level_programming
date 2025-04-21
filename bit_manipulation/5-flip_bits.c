#include "main.h"
#include <stdio.h>
/**
 * flip_bits - compare the bits and count the bits that need to change
 * @n: first number
 * @m: second number
 * Return: return the count of bits that need to flip
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comparison;
	unsigned int count;

	comparison = n ^ m; /*xor of the two numbers*/
	count = 0;

	while (comparison > 0)
	{
		if (comparison & 1) /*compare last bit*/
		{
			count = count + 1;
		}
		comparison = comparison >> 1;
	}
	return (count);
}
