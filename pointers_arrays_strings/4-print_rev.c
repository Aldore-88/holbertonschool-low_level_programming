#include "main.h"
/**
 *print_rev - prints string in reverse
 *@s: string
 *Description: careful with the starting position of x
 *
 */
void print_rev(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x = x + 1;
	}
	while (x != 0)
	{
		x = x - 1;
		_putchar (s[x]);
	}
	_putchar ('\n');
}
