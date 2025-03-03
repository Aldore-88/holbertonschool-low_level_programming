#include "main.h"
/**
 *_atoi - spits out number with sign
 *description: move through string, counts the number of '-' signs
 *convert char to int when adding
 *counts the first set of numbers on the string
 *@s: input string
 *
 */
int _atoi(char *s)
{
	int sign;
	int num_start;
	int num;

	sign = 1;
	num_start = 0;
	num = 0;

	while (*s++)
	{
		if (*s == '-' && num_start == 0)
		{
			sign = sign * -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num_start = 1;
			num = (num * 10) + (*s - '0');
		}
		else if ((*s <= '0' || *s >= '9') && num_start == 1)
		{
			break;
		}

	}
	return (num * sign);
}
