#include "main.h"
/**
 *print_alphabet_x10 - print alphabet x 10
 *Description: a to z using _putchar user defined header x 10
 *
 *Return: return (0) in the 2-main.c
 */

void print_alphabet_x10(void)
{
	int x;
	int y;

	y = 0;

	while (y < 10)
	{
	x = 'a';

		while (x <= 'z')
		{
		_putchar(x);
		x = x + 1;
		}

	_putchar('\n');
	y = y + 1;
	}
}
