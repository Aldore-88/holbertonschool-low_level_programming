#include "main.h"
/**
 * prime_check - checking if number x is a prime
 * @x: integer to check if prime
 * @num: incrementing number to check against prime
 * Return: return if number is a prime
 *
 */
int prime_check(int x, int num)
{
	if (x < 2)
	{
		return (0);
	}
	if ((x % num == 0) && (num < x))
	/*prime number is only divisible by itself*/
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
 * @n: value to check
 * Return: returns the prime_check
 *
 */
int is_prime_number(int n)
{
	return (prime_check(n, 2));
}
