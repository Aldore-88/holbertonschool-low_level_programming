#include <stdio.h>
/**
 * main - counting to 100
 *
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = 1;

	while (i < 100)
	{
		if (i % 15 == 0 && i > 0)
		{
			printf("FizzBuzz ");
			i = i + 1;
		}
		if (i % 5 == 0 && i > 0)
		{
			printf("Buzz ");
			i = i + 1;
		}
		if (i % 3 == 0 && i > 0)
		{
			printf("Fizz ");
			i = i + 1;
		}
		else
		{
			printf("%d ", i);
			i = i + 1;
		}
	}

	return (0);
}
