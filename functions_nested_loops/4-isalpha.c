#include "main.h"
/**
 * _isalpha - check to see if c is a letter, lower or upper case
 *
 * @c: character to be checked
 * Return: 1 if a letter, 0 if not
 *
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}


}
