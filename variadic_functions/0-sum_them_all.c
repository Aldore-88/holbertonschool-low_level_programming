#include "variadic_functions.h"
#include <stdarg.h>
/**
 *
 *
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ptr;

	va_start(ptr, n);
	i = 0;
	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	while (i < n)
	{
		sum = sum + va_arg(ptr, int);
		i = i + 1;
	}
	va_end(ptr);
	return (sum);
}
