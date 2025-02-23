#include "main.h"
/**
 *_islower - checks if the character is lower case
 *
 *
 *
 *
 */
int _islower(int c)
{
	if (97 <= c && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
