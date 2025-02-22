#include "main.h"

/**
 * main - print _putchar
 * Description: print _putchar using user defined header main.h
 *
 *
 * Return: 0
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
