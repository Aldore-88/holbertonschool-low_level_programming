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
	max = 98;

	while (src[count] != '0' && count < max)
	{
		dest[count] = src[count];
		count = count + 1;
	}
	return (dest);
}
