#include <stdio.h>
/**
 *main - Entry Point
 *Description: Printing numbers of base 16
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;
	int y;

	x = '0';
	y = 'a';

	while (x <= '9')
	{
	putchar(x);
	x = x + 1;
	}

	while (y <= 'g')
	{
	putchar(y);
	y = y + 1;
	}

	putchar('\n');

	return (0);
}
