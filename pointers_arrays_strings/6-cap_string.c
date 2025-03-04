#include "main.h"
/**
 * cap_string - capitalise first letter of word
 * @str: string
 *
 * Return: returns string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && (str[i - 1] == ' '
		|| str[i - 1] == '.' || str[i - 1] == '\n' || str[i - 1] == '\t' || i == 0))
		{
			str[i] = str[i] - 32;
		}
		i = i + 1;
	}
	return (str);
}
