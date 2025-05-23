#include <stdio.h>
#include "main.h"
/**
 * print_binary - print value in binary
 * @n: integer to convert
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1); /*shift right*/
	}
	_putchar('0' + (n & 1)); /*comparing last bit with & operator*/
}
