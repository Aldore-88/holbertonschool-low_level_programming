#include "main.h"
/**
 * _strspn - count string if there are matching char
 * @s: string
 * @accept: accepted values
 * Return: count of characters that match in order
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int max = 4;
	int iterate;
	int encounter = 0;
	int total = 0;

	while (s[count] != '\0')
	{
		iterate = 0;
		encounter = 0;
		while (iterate < max)
		{
			if (s[count] == accept[iterate])
			{
				total = total + 1;
				encounter = encounter + 1; /* 1 has encountered match */
			}
			iterate = iterate + 1;
		}
		if (encounter == 0)
		{
			return (total);
		}
		else
		{
			count = count + 1;
		}
	}
	return (0);
}
