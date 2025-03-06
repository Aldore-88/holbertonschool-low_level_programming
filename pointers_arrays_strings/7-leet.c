#include "main.h"
/**
 * leet - change string to leet speak
 * @str: string
 * Return: return string as leet speek
 *
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char alph[] = "aAeEoOtTlL";
	char replace[] = "43071";

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (alph[j] == str[i])
			{
				str[i] = replace[j / 2];
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (str);
}
