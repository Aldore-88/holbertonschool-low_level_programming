#include "main.h"
/**
 *_strchr - search character
 *@s: string to search
 *@c: character to find
 *Return: returns the pointer to the first occurance of char c
 */
char *_strchr(char *s, char c)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		if (s[counter] == c)
		{
			return (s + counter);
		}
		counter++;
	}
	return (0);
}
