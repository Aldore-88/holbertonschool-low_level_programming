#include "main.h"
/**
 * _isdigit - checks if c is digit
 * @c: char to check
 *
 * Return: if c is digit return 1 otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
