#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * calloc - free memory then allocate
 *
 *
 *
 * 
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(size * nmemb);
	if (mem == NULL)
	{
		return (NULL);
	}

	return (mem);
}
