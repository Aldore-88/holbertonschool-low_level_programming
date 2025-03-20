#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocating memory of size b
 * @b: size of memory to assign
 *
 * Return: the pointer to memory address
 * Description: if failed error exit with error code 98
 */
void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
