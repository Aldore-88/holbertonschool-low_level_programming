#include "main.h"
/**
 *main - print _putchar
 *Description: no stdio.h, user defined header instead -> main.h
 *
 *Return : always zero (success)
 */

int main(void)
{
	char word[8] = "_putchar";
	int x = 0;

	while (x <= 7)
	{
		_putchar(word[x]);
		x = x + 1;
	}

	_putchar('\n');
	return (0);
}
