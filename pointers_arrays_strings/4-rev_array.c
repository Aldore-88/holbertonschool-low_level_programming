#include "main.h"
/**
 *
 *
 *
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp = 0;

	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n-1];
		a[n-1] = tmp;

		i = i + 1;
		n = n - 1;
	}
}
