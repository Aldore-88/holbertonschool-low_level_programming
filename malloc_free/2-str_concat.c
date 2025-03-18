#include <stdio.h>
#include <stdlib.h>
/**
 * str_length - legnth of string
 * @x: string input
 * Return: max value of string
 *
 */
int str_length(char *x)
{
	int max;

	max = 0;

	while (x[max] != '\0')
	{
		max = max + 1;
	}
	return (max);
}

/**
 * str_concat - connects multiple strings together (2 strings)
 * @s1: string 1
 * @s2: string 2
 * Return: return combined strings
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
	int max1;
	int max2;
	char *array;
	int i;

	max1 = str_length(s1);
	max2 = str_length(s2);
	i = 0;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	array = malloc((max1 + max2 + 1) * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	while (i < (max1 + max2))
	{
		if (i < max1)
		{
			array[i] = s1[i];
			i = i + 1;
		}
		else if (i >= max1)
		{
			array[i] = s2[i - max1];
			i = i + 1;
		}
	}
	return (array);
}
