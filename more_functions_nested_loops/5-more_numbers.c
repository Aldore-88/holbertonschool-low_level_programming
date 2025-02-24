#include "main.h"
/**
 * more_numbers - print 0 - 14, 10 times
 *
 *
 *
 */
void more_numbers(void)
{
	int num;
	int x;

	x = 0;

	while (x <= 9)
	{
		num = 0;

		while (num <= 14)
		{
			if (num > 9)
			{
				_putchar ((num / 10) + '0');
			}

			_putchar ((num % 10) + '0');
			num = num + 1;
		}
		_putchar ('\n');
		x = x + 1;
	}
}
