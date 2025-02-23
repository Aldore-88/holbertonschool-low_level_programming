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

	row = 0;

	while (row <= 9)
	{
		col = 0;

		while (col <= 9)
		{
			prod = row * col;
			if (prod > 9)
			{
				_putchar((prod / 10) + '0');
			}
			if (prod <= 9)
			{
				_putchar(' ');
			}
	
			_putchar((prod % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
				col = col + 1;
		}
	row = row + 1;
	_putchar('\n');
	}
}
