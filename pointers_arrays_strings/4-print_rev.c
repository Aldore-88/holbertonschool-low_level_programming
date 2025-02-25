#include "main.h"
/**
 *print_rev - prints string in reverse
 *@s: string
 *
 *
 */
void print_rev(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		_putchar (s[x]);
		x = x + 1;
	}
	while (x != -1)
	{
		_putchar (s[x]);
		x = x - 1;
	}
	_putchar ('\n');
}
