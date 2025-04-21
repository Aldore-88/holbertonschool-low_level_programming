#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - binary to usigned int
 * @b: input binary number (as a string)
 * Return: return binary_num
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary_num;
	int index;

	binary_num = 0;
	index = 0;

	while (b[index] != '\0')
	{
		/*check if it is 1 or 0 if not then return(0)*/
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}

		binary_num = binary_num << 1; /*shift bits left*/

		if (b[index] == '1')
		{
			binary_num = binary_num | 1; /*place 1 in right bit position*/
		}
		index = index + 1;
	}
	return (binary_num);
}
