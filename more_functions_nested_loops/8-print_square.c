#include "main.h"
/**
 * print_square - prints a square of int (size)
 * @size: integer size
 *
 *
 */
void print_square(int size)
{
	int x;
	int y;

	y = 1;

	while (y <= size && size > 0)
	{
		x = 1;
		while (x <= size)
		{
			_putchar ('#');
			x = x + 1;
		}

		y = y + 1;
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar ('\n');
	}
}
