#include "main.h"
/**
 * _islower - checks if the character is lower case
 *
 * @c: character to be checked (we dont have to declare c??)
 *
 * Return: 0 when upper case 1 when lower case
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
