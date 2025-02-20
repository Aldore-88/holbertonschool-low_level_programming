#include <stdio.h>
/**
 *main - Entry point
 *
 * Description: alphabet backwards
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	x = 'z';

	while (x >= 'a')
	{
	putchar(x);
	x = x - 1;
	}

	putchar('\n');
	return (0);
}
