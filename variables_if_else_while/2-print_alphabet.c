#include <stdio.h>
/**
 *main - Entry point
 *Description: a to z using putchar
 *
 *Return: Always 0 (sucess)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	return (0);
}
