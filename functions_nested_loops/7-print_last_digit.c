#include "main.h"
/**
 * print_last_digit - prints last digit mod 10
 * @x: int to check
 * Return: value of y which is the mod 10 of x, bc y is a int - (...+ '0')
 */
int print_last_digit(int x)
{
	int y;

	if (x < 0)
	{
		x = -x;
	}

	y = x % 10;
	_putchar(y + '0');
	return (y);
}
