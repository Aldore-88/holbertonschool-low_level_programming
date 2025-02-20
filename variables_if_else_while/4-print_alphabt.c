#include <stdio.h>
/**
 *main - Entry point
 *Description: list alphabet excluding q and e
 *
 *Return: Always zero (Success)
 */
int main(void)
{
	int x;

	x = 'a';

	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
		{
		putchar(x);
		x = x + 1;
		}
		else
		{
		x = x + 1;
		}
	}
	putchar('\n');
	return (0);
}
