#include <stdio.h>
/**
 *main - Entry point
 *Description: Counting using putchar with 'space' and ,
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = '0';

	while (x <= '9')
	{
	putchar(x);
	if (x < '9')
	{
	putchar(32);
	putchar(44);
	}

	x = x + 1;
	}

	putchar('\n');
	
	return (0);
}
