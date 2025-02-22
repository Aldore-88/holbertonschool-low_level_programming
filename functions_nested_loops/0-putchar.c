#include <stdio.h>

/**
 * main - print _putchar
 * Description: not allowed to use the standard library
 *
 * Return : always zero (success)
 */

int main(void)
{
	char str[8] = "_putchar";
	int x = 0;

	while (x <= 7)
	{
		putchar(str[x]);
		x = x + 1;
	}

	putchar ('\n');
	return (0);
}
