#include <stdio.h>
/**
 *main - Entry point
 *Description: printing numbers of base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
		putchar(x);

	putchar('\n');
	return (0);
}
