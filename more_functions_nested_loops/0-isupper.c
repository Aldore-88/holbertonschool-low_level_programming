#include "main.h"
/**
 * _isupper - checking if char is upper case
 *
 * @c: char to check
 * Return: 1 if c if uppercase 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
