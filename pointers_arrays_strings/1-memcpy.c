#include "main.h"
/**
 *_memcpy - memory copy over to dest from src
 *@dest: destination begin copy here
 *@src: source to copy
 *@n: number of values to copy
 *Return: return dest`
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter = 0;

	while (counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}
	return (dest);
}
