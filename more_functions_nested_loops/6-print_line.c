#include "main.h"
/**
 * print_line - prints line '_' n times
 * @n: number of times to print line
 *
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar ('_');
		n = n - 1;
	}
	_putchar ('\n');
}
