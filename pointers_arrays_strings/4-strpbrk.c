#include "main.h"
/**
 * _strpbrk - pointer to string where character is found
 * @s: string
 * @accept: accepted char
 * Return: return the pointer to where matched char is found
 */
char *_strpbrk(char *s, char *accept)
{
	int counter = 0;
	int iterate = 0;
	int max = 0;
	int encounter = 0;

	while (s[max] != '\0')
	{
		max = max + 1;
	}

	while (s[counter] != '\0')
	{
		iterate = 0;
		while (accept[iterate] != '\0')
		{
			if (s[counter] == accept[iterate])
			{
				encounter = encounter + 1; /*encoutered match = 1*/
			}
			iterate = iterate + 1;
		}

		if (encounter == 1)
		{
			return (s + counter);
		}
		counter = counter + 1;
	}
	return (0);
}
