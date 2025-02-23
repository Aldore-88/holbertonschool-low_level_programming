#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints number until 98
 * @n: starting number
 *
 *
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n = n + 1;
	}
	while (n > 98)
	{
		printf("%d, ", n);

		n = n - 1;
	}
	if (n == 98)
		printf("%d\n", n);
}
