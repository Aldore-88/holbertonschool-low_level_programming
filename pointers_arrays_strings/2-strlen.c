#include "main.h"
/**
 * _strlen - count string length
 * @s: string to count
 * Description: counting number of char from a string using arrays??
 *
 * Return: 0?? or value of count?
 */
int _strlen(char *s)
{
	int x;

	x = 15;

	while (s[x] != '\0')
	{
		x = x + 1;
	}

	return (x);
}
