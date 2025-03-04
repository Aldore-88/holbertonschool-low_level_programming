#include "main.h"
/**
 *string_toupper - changes string letters to uppercase
 *@str: string
 *Return: upper case string
 *
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i = i + 1;
	}
	return (str);
}
