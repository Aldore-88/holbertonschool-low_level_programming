#include "main.h"
/**
 * _pow_recursion - x to the power of y
 * @x: base number
 * @y: power
 * Return: return x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (x / x);
	}
	return (x * _pow_recursion(x, y - 1));
}
