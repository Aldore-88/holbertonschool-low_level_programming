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

	mem = malloc(size * nmemb);
	if (mem == NULL)
	{
		return (NULL);
	}

	return (mem);
}
