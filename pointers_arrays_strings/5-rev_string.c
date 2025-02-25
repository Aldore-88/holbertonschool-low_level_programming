#include "main.h"
/**
 *rev_string - reverse string but how?
 *@s: string
 *
 *
 */
void rev_string(char *s)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (s[x] != '\0')
	{
		copy[y] = s[x];
		x = x + 1;
		y = y + 1;
	}

	x = 0;
	while (y >= 0)
	{
		s[x] = copy [y];
		x = x - 1;
		y = y - 1;
	}
		
}
