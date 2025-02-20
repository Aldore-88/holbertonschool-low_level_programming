#include <stdio.h>
/**
 *main - Entry point
 *Description: putchar max 3 times, alphabet lowercase than capital a to z
 *Return: Always 0 (sucess)
 */

int main(void)
{
	int x;
	int y;

	x = 'a';
	y = 'A';

	while (x <= 'z')
	{
	putchar(x);
	x = x + 1;
	}

	while (x > 'z' && y <= 'Z')
	{
	putchar (y);
	y = y + 1;
	}

	putchar('\n');

	return (0);
}
