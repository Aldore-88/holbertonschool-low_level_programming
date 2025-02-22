#include "main.h"
/**
 *main - print alphabet
 *Description: a to z using _putchar user defined header
 *
 *Return: return (0) in the 1-main.c
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
}
