#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: string to duplicate
 * Return: returns string array of new_str
 *
 */
char *_strdup(char *str)
{
	char *new_str;
	int max;
	int i;

	while (str[max] != '\0')
	{
		max = max + 1;
	}

	new_str = malloc(max * sizeof(char));
	if (str == NULL || new_str == NULL)
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
