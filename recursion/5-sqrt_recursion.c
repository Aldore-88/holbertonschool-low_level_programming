#include "main.h"
/**
 * check_sqrt - checking square root
 * @x: value of number to check
 * @root: value of root
 * Return: return the root value
 */
int check_sqrt(int x, int root)
{
	if ((root * root) > x)
	{
		return (-1);
	}
	if ((root * root) == x)
	{
		return (root);
	}
	return (check_sqrt(x, root + 1)); /*while still under*/
}

/**
 * _sqrt_recursion - square root check using recursion
 * @n: integer to check
 * Return: value of root -> from check_sqrt
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (check_sqrt(n, 0));
}
