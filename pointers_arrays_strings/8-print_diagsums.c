#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum diagonal
 * @a: array (is in a single array instead of 2D)
 * @size: size of "2D" array
 */
void print_diagsums(int *a, int size)
{
	int pos = 0;
	int rev_pos = size - 1;
	int total = 0;
	int rev_total = 0;

	while (pos < size)
	{
		total = total + a[pos + (size * pos)];

		rev_total = rev_total + a[rev_pos + (size * pos)];

		rev_pos = rev_pos - 1;
		pos = pos + 1;
	}
	printf("%d, %d\n", total, rev_total);
}
