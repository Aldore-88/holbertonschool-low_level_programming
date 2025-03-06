#include "main.h"
/**
 * _memset - memory set
 * @s: array set
 * @b: character to place into memory
 * @n: unsigned int, gives the no of memory spaces to set
 * Return: returns the array s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter = 0;

	while (counter < n)
	{
		s[counter] = b;
		counter++;
	}
	return (s);
}
