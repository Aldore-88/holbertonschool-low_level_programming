#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elemement sof an array of integers
 * @a: array
 * @n: number of elements to be printed
 *
 */
void print_array(int *a, int n)
{
	int x;
	
	x = 0;
	
	while (x < n)
	{
		if (x == (n - 1))
		{ 
			printf("%d", a[x]);
		}
		else if (x < n)
		{
			printf("%d, ", a[x]);
		}
		x = x + 1;
	}
	printf("\n");
}
