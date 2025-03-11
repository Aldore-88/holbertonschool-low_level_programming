#include "main.h"

int prime_check(int x, int num)
{
	if (x < 2)
	{
		return (0);
	}
	if ((x % num == 0) && (num < x))
	{
		return (0);
	}
	if (num == x)
	{
		return (1);
	}
	return (prime_check(x, num + 1));
}
/**
 * is_prime_number - prime is a number that is 
 * not divisibile by anything other than itself
 *
 *
 *
 */
int is_prime_number(int n)
{
	return (prime_check(n, 2));
}
