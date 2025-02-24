#include "main.h"
/**
 * print_diagonal - prints line '\' in a diagonal n times
 * @n: number of times to print line
 *
 */
void print_diagonal(int n)
{
	int space;
	
	space = 0;
	if (n > 0)
	{
		while (space <= n)
		{
			_putchar ('.');
			if (space == n)
			{
				_putchar (92);
				_putchar ('\n');
				space = space + 1;
			}
			else
			{
				_putchar (' ');
				space = space + 1;
			}
		}
	}
	else
	{
		_putchar ('\n');
	}
}
