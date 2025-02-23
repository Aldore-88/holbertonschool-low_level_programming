#include "main.h"
/**
 * jack_bauer - dont know why its named this?
 * description: prints every minute of the day
 *
 */
void jack_bauer(void)
{
	int hr;
	int min;

	hr = 0;

	while (hr < 24)
	{
		min = 0;

		while (min < 60)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min = min + 1;
		}

		hr = hr + 1;
	}
}
