#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: string
 * Return: when the string ends it starts to unwind the recursive function
 *
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}

	if (s[0] == '\0')
	{
		return;
	}
}
