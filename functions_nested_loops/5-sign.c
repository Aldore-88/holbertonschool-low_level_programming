#include "main.h"
/**
 * print_sign - prints sign of integer
 * @n: number to be checked - why does this not need to be initialised?
 *
 * Return: 0 when zero, 1 when positive -1 when negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
