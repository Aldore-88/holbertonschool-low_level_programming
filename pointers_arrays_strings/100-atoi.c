#include "main.h"
/**
 *_atoi - spits out number with sign
 *description: move through string, counts the number of '-' signs
 *convert char to int when adding
 *counts the first set of numbers on the string
 *@s: input string
 *Return: value num with sign
 */
int _atoi(char *s)
{
	int sign;
	int num_start;
	unsigned int num;
	int count;

	sign = 1;
	num_start = 0;
	num = 0;
	count = 0;

	while (s[count] != '\0')
	{
		if (s[count] == '-' && num_start == 0)
		{
			sign = sign * -1;
		}
		else if (s[count] >= '0' && s[count] <= '9')
		{
			num_start = 1;
			num = (num * 10) + (s[count] - '0');
		}
		else if ((s[count] < '0' || s[count] > '9') && num_start == 1)
		{
			break;
		}
		count = count + 1;
	}
	return (num * sign);
}
