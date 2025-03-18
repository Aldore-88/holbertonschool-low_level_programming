#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: string to duplicate - remember null value at end of string
 * Return: returns string array of new_str
 *
 */
char *_strdup(char *str)
{
	char *new_str;
	int max;
	int i;

	max = 0;
	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[max] != '\0')
	{
		max = max + 1;
	}

	new_str = malloc(max * sizeof(char) + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}

	while (i < max)
	{
		new_str[i] = str[i];
			i = i + 1;
	}
	return (new_str);
}
