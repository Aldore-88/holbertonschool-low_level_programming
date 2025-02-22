#include "main.h"
/**
 *main - print alphabet
 *Description: a to z using _putchar user defined header
 *
 *Return: Always 0 (sucess) dont need return (0) because???? - this is actually the command, and it has return (0) in the 1-main.c
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
