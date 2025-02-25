#include "main.h"
/**
 *puts2 - prints every second char
 *@str: string
 *Description: incrementing the mem_slot, then check if its every 2nd slot
 *
 */
void puts2(char *str)
{
	int x;
	int mem_slot;

	x = 0;
	mem_slot = 0;

	while (str[mem_slot] != '\0')
	{
		x = (mem_slot % 2);
		if (x == 0)
		{
			_putchar (str[mem_slot]);
		}
		mem_slot = mem_slot + 1;
	}
	_putchar('\n');
}
