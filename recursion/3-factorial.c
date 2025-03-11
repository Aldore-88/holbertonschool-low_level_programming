#include "main.h"
/**
 * factorial - 5! is 5*4*3*2*1, 0! is 1, -1! is undefined
 * @n: number to factorial
 * Return: return total, -1 for undefined, 1 for 0!
 *
 */
int factorial(int n)
{
	if (n > 0)
	{
		return(n * factorial(n - 1));
	}
	if (n < 0)
	{
		return (-1);
	}
		return (1);
}
