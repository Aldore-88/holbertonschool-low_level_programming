#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of triangle
 *
 *
 */
void print_triangle(int size)
{
	int col = 0;
	int row;

	while (col < size)
	{
		row = 0;

		while (row < size)
		{
			if ((row + 1) < (size - col))
			{
				_putchar(' ');
				row = row + 1;
			}
			else
			{
				_putchar('#');
				row = row + 1;
			}
		}

		_putchar('\n');
		col = col + 1;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
