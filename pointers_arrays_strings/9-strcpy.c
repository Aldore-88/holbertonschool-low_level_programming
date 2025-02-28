#include "main.h"
/**
 * _strcpy - string copy to array
 * @dest: destination array for copied string
 * @src: source of string to copy
 *
 * Return: starting of destination array
 */
char *_strcpy(char *dest, char *src)
{
	int count;
	int max;

	count = 0;
	max = 0;

	while (src[max] != '\0')
	{
		max = max + 1;
	}

	while (count <= max)
	{
		dest[count] = src[count];
		count = count + 1;
	}
	return (dest);
}
