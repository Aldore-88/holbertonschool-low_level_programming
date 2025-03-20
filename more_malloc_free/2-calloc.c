#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocate memory then clear assigning all to 0
 * @nmemb: number of memory bytes
 * @size: size of bits
 * Return: array
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(size * nmemb);
	if (mem == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < nmemb * size)
	{
		mem[i] = 0;
		i = i + 1;
	}

	return (mem);
}
