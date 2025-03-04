#include "main.h"
/**
 *_strcmp - string compare
 *@s1: string 1
 *@s2: stirng 2
 *Return: difference in string, else if same = 0
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
			i = i + 1;
		}
	}
	return (s1[i] - s2[i]);
}
