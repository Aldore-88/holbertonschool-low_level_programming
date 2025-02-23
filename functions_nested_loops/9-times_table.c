#include "main.h"
/**
 * times_table - create 9 times table
 * description: create a table
 *
 */
void times_table(void)
{
	int col;
	int row;
	int prod;

	col = 0;

	while (col <= 9)
	{
	row = 0;

		while (row <= 9)
		{
		prod = row * col;
		if (prod > 9)
		{
			_putchar((prod / 10) + '0');
		}
		_putchar((prod % 10) + '0');
		_putchar(',');
		_putchar(' ');
		row = row + 1;
		}
	col = col + 1;
	_putchar('\n');
	}
}
