#include "main.h"
/**
 * puts_half - prints the second half of string, if odd middle not included
 * @str: string
 *
 *
 */
void puts_half(char *str)
{
	int x;
	int half;

	x = 0;

	while (str[x] != '\0')
	{
		x = x + 1;
	}
	if ((x % 2) == 0)
	{
		half = x / 2;
	}
	else if ((x % 2) == 1)
	{
		half = (x - 1) / 2;
	}
	while (str[half] != '\0')
	{
		_putchar (str[half]);
		half = half + 1;
	}
	_putchar('\n');
}
