#include "main.h"
/**
 * print_diagonal - prints line '\' in a diagonal n times
 * @n: number of times to print line
 * Description: listing out '\' first then think about the spaces
 */
void print_diagonal(int n)
{
	int row = 0;
	int space;

	while (row < n)
	{
		space = 0;
		while (space < row)
		{
			_putchar(' ');
			space = space + 1;
		}
		_putchar(92);
		_putchar('\n');
		row = row + 1;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
